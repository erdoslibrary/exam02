
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char rot_13(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (( c - 'A' + 13) % 26) + 'A';
	else if ((c >= 'a' && c <= 'z'))
		return (( c - 'a' + 13) % 26) + 'a';
	return c;
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
			ft_putchar(rot_13(argv[1][i++]));
	}
	ft_putchar('\n');
	return (0);
}
