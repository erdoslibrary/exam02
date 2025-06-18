
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int is_space(char c)
{
	return (c == ' ' || c == '\t');
}

char to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

void rsrtr_capitalizer(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (is_alpha(str[i]))
		{
			// 다음 문자가 공백 또는 끝
			if (is_space(str[i + 1]) || str[i + 1] == '\0')
				ft_putchar(to_upper(str[i]));
			else
				ft_putchar(to_lower(str[i]));
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 1;
	
	if (argc == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i < argc)
	{
		rsrtr_capitalizer(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}