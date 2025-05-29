
#include <stdio.h>
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c) // 구분자가 아니면
		{
			count++; // count 올라감
			while (*s && *s != c) // 구분자가 아니면
				s++; // s의 길이를 잰다
		}
		else
			s++; // 구문자를 만나도 한 칸 전진
	}
	return (count);
}

static char	*malloc_word(const char *s, char c)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c) //s가 구분자가 아니고 끝도 아니면
		len++; //len 증가
	word = (char *)malloc(sizeof(char) * (len + 1)); // 단어의길이 + '\0'
	if (!word) // 동적할당 실패
		return (NULL);
	i = 0;
	while (i < len) // i가 len 전까지 word
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_words(char **words, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(words[i]); //문자열 해제
		i++;
	}
	free(words); //배열 해제
}

static const char	*skip_delimiter(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		word_count;
	int		i;

	if (!s)
		return (NULL); // s가 비었으면 null 반환
	word_count = count_words(s, c); // count 반환
	words = (char **)malloc(sizeof(char *) * (word_count + 1)); // 배열 동적할당
	if (!words) // 할당 실패했음
		return (NULL);
	i = 0;
	while (*s) // s가 null을 만날때가지
	{
		s = skip_delimiter(s, c); // 우선 구분자 패스
		if (*s)
		{
			words[i] = malloc_word(s, c); // 단어 저장
			if (!words[i++]) // 할당 중 오류가 발생했을 때 부분적으로 할당 메모리 해제
				return (free_words(words, i), NULL); // 함수 종료 원래는 return (NULL)
			while (*s && *s != c) // 구분자 만날 때까지 word입력
				s++;
		}
	}
	words[i] = NULL;
	return (words);
}

int main(void)
{
    char **result;
    int i;

    result = ft_split("hello world split function", ' ');
    printf("Test 1:\n");
    for (i = 0; result[i] != NULL; i++)
        printf("result[%d]: %s\n", i, result[i]);
    free_words(result, i);

    result = ft_split("split///this///string", '/');
    printf("Test 2:\n");
    for (i = 0; result[i] != NULL; i++)
        printf("result[%d]: %s\n", i, result[i]);
    free_words(result, i);

    result = ft_split("/start/and/end/", '/');
    printf("Test 3:\n");
    for (i = 0; result[i] != NULL; i++)
        printf("result[%d]: %s\n", i, result[i]);
    free_words(result, i);

    return (0);
}
