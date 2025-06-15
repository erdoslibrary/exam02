
#include <unistd.h>

/* 이전에 나왔는지 중복을 처리하는 함수 */
int check_char(char *str, int len, char c)
{
	int i = 0;
	while (i < len && str[i])
	{
		if(str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int exist_in(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if(str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i = 0;
		while (argv[1][i])
		{
			if (exist_in(argv[2], argv[1][i]) && !check_char(argv[1], i, argv[1][i]))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}