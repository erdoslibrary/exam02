
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char change_upper_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return c;
}

void ulstr(char *str)
{
	while (*str)
	{
		ft_putchar(change_upper_lower(*str));
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}

