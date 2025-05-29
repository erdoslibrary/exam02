
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

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			ft_putchar(change_upper_lower(*argv[1]++));
	}
	ft_putchar('\n');
	return (0);
}

