
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return c;
}

int main(int argc, char **argv)
{
	int i = 0;
	char c;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				i++;
				ft_putchar(to_upper(argv[1][i]));
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}



