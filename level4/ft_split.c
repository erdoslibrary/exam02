
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
		if(str[i]) // 공백 다 지나가고 단어를 만났다!
		{
			count++;
			while (str[i] && !is_sep(str[i])) // 단어의 끝까지 이동
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

void free_split(char **split)
{
	int i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char **ft_split(char *str)
{
	int i = 0; 
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
			result[w] = copy_word(str, start, i); // 단어 범위를 지정해서 복사
			if(!result[w])  // 복사 실패 시 메모리 해제
			{
				free_split(result);
				return NULL;
			}
			w++; // 단어 갯수 증가
		}
	}
	result[w] = NULL;
	return result; //단어 배열 반환
}

int main(void)
{
	char **result;
	int i = 0;

	result = ft_split("Hello world!");
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return 0;
}