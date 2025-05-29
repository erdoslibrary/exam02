
#include <stdio.h>
#include <stdlib.h>

static int is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static int count_words(char *str)
{
	int count = 0;

	while (*str)
	{
		while (*str && is_delimiter(*str))
			str++;
		if (*str)
		{
			count++;
			while (*str && !is_delimiter(*str))
				str++;
		}
	}
	return (count);
}

static char *copy_word(char *start)
{
	int len = 0;
	char *word;
	int i = 0;

	while (start[len] && !is_delimiter(start[len]))
		len++;
	word = (char *)malloc(sizeof(char )*(len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void free_all(char **words, int count)
{
	int i = 0;

	while (i < count)
		free(words[i++]);
	free(words);
}

char **ft_split(char *str)
{
	int word_count;
	char **result;
	int i = 0;

	if (!str)
		return (NULL);

	word_count = count_words(str);
	result = (char **)malloc(sizeof(char *)*(word_count +1));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str && is_delimiter(*str))
			str++;
		if (*str)
		{
			result[i] = copy_word(str);
			if (!result[i])
			{
				free_all(result, i);
				return (NULL);
			}
			i++;
			while(*str && !is_delimiter(*str))
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}

int main(void)
{
	char *test = "hello   word\tthis is\na\ttest";
	char **words = ft_split(test);
	int i = 0;

	if (!words)
	{
		printf("Error: split failed\n");
		return 1;
	}
	while (words[i])
	{
		printf("word[%d]: %s\n", i, words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}
