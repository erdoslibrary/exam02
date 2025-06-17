

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

// start에서부터 end-1까지 문자열 출력 함수
void print_word(char *str, int start, int end) 
{
	int i = start;
	while (i < end)
		ft_putchar(str[i++]);
}

void rostring(char *str)
{
	int i = 0, start = -1, end = -1; // -1은 값이 저장되지 않았다. 초기화만 해둔 상태라는 의미
	int first_word_start = -1, first_word_end = -1;
	int word_count = 0;

	// 문자열의 첫 번째 단어
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	first_word_start = i;
	while (str[i] && str[i] != '\t' && str[i] != ' ')
		i++;
	first_word_end = i;

	// 나머지 단어들
	i = 0; // i를 다시 0으로 초기화하여 문자열 처음부터 시작
	// 문자열의 모든 단어를 순회
	// 단어를 찾을 때까지 공백과 탭을 건너뛰고, 단어의 시작과 끝을 찾는다.
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		end = i;
		if (end > start) // end와 start가 다를 때만 실행됨
		{
			if(word_count) // 0이 아니라면 띄어쓰기 -> 첫번째만 공백없이 출력 이후는, 공백 하나 포함해서 start~ end-1출력
				ft_putchar(' ');
			print_word(str, start, end);
			word_count++;
		}
	}
	if (first_word_end > first_word_start) // 마지막으로 첫 번째 단어 출력해라
	{
		if(word_count)
			ft_putchar(' ');
		print_word(str, first_word_start, first_word_end);
	}
}

int main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	ft_putchar('\n');
	return 0;
}