
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void epur_str(char *str)
{
	int i = 0;
	int first_word = 0;

	while (str[i])
	{
		// 1. 공백/탭 건너뛰기
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
		// 2. 단어 발견
		if (str[i])
		{
			// 첫 단어 아니면 한 칸 공백
			if (first_word)
				ft_putchar(' ');
			first_word = 1;

			// 단어 출력
			while (str[i] && str[i] != ' '  && str[i] != '\t')
			{
				ft_putchar(str[i]);
				i++;
			}
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return 0;
}
