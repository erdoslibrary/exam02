
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void str_capitalizer(char *str)
{
	int i = 0;
	while (str[i])
	{
		// 공백 출력
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
			ft_putchar(str[i++]);
		if (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
			ft_putchar(str[i++]);
		}
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + ('a' - 'A');
			ft_putchar(str[i++]);
		}
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		str_capitalizer(argv[i]);
		i++;
	}
	return (0);
}