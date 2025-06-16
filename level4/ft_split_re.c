
#include <stdlib.h>

int is_sep(char c)
{
 	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while(str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if(str[i])
		{
			count++;
			while (str[i] && !is_sep(str[i]))
				i++;
		}
	}
	return count;
}

char *copy_word(char *str, int start, int end)
{
	int len = end - start;
	char *word = (char *)malloc(len + 1);
	int i = 0;
	
	if (!word)
		return NULL;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return word;
}

char **ft_split(char *str)
{
	int i = 0; 
	int j = 0;
	int w = 0;
	int start;

	int word_count = count_words(str);
	char **result = (char **)malloc(sizeof(char*)* (word_count + 1));
	if (!result)
		return NULL;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if(str[i])
		{
			start = i;
			while (str[i] && !is_sep(str[i]))
				i++;
			result[w++] = copy_word(str, start, i);
		}
	}
	result[w] = NULL;
	return result;
}