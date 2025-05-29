
#include <unistd.h>

char *white_space(char *str)
{
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	return (str);
}


void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2 )
	{
		char *s = white_space(argv[1]);
		while (*s != ' ' && *s != '\0')
		{
			ft_putchar(*s);
			s++;
		}
	}
	ft_putchar('\n');
	return (0);
}
