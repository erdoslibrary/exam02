
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_word(char *str, int start, int end)
{
	int i = start;
	while (i < end)
		ft_putchar(str[i++]);
}

void rev_wstr(char *str)
{
	int i = 0;
	int word_count = 0;
	int start[1024];
	int end[1024];

	while (str[i])
	{
		start[word_count] = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		end[word_count] = i; // 현재 단어의 끝 위치
		word_count++;
		if (!str[i]) // 문자열 끝나면 종료
			break;
		i++;
	}

	// start[0] end[0] 
	// start[1] end[1] ... word_count 총 갯수

	int j = word_count - 1;
	while (j >= 0)
	{
		print_word(str, start[j], end[j]);
		if (j > 0)
			ft_putchar(' ');
		j--;
	}
}


int main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	ft_putchar('\n');
	return 0;
}
