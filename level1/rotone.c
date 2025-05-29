
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char rotone(char c)
{
	if (c >= 'A' && c <= 'Z')
		return ((c - 'A' + 1) % 26 +'A');
	else if(c >= 'a' && c <= 'z')
		return ((c - 'a' + 1) % 26 + 'a');
	return (c);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
			ft_putchar(rotone(*argv[1]++));
	}
	ft_putchar('\n');
	return (0);
}

