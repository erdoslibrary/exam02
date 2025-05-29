#include <unistd.h>

int is_whitespace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

char *skip_whitespace(char *str)
{
	while (is_whitespace(*str))
		str++;
	return str;
}


void ft_putchar(char c)
{
    write(1, &c, 1);
}

int mian(int argc, char *argv)
{
	if (argc == 2)
	{
		char *s = skip_whitespace(argv[1]);
		while (*s && !is_whitespace(*s))
		{
			ft_putchar(s);
			s++;
		}
	}
	ft_putchar('\n');
	return (0);
}
