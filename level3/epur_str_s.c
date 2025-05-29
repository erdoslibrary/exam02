
#include <unistd.h>

int main(int argc, char **argv)
{
	char *s = argv[1];
	int first_word = 1;
	char *word_start;
	char *word_end;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	while (*s)
	{
		// 앞 공백 건너뜀
		while (*s == ' ' || *s == '\t')
			s++;
		if (*s == '\0')
			break;
		// 시작점 잡음
		word_start = s;
		// 단어 끝으로 이동
		while (*s && *s != ' ' && *s != '\t')
			s++;
		word_end = s;
		// 첫 단어가 아니면 앞 공백 출력하기
		if (!first_word)
			write(1, " ", 1);
		// 단어 출력
		while (word_start < word_end)
			write(1, word_start++, 1);
		first_word = 0;
	}
	write(1, "\n", 1);
	return (0);
}
