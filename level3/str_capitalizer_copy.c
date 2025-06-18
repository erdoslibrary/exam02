
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int is_alpha(char c)
{
	return (( c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int is_space(char c)
{
	return (c == ' ' || c == '\t');
}

char to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return c - 32;
	return c;
}

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 32;
	return c;
}

void str_capitalizer(char *str)
{
	int i = 0;
	while (str[i])
	{
		// 공백 출력
		while (str[i] != '\0' && is_space(str[i]))
			ft_putchar(str[i++]);
		if (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;;
			ft_putchar(str[i++]);
		}
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
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