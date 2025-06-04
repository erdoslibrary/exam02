
#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *white_space(char *str)
{
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	return (str);
}

void first_word(char *str)
{
	char *s = white_space(str);
	while (*s != ' ' && *s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
