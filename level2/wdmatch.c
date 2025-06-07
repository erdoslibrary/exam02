
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		while (argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (argv[1][i] == '\0')
		{
			i = 0;
			while (argv[1][i])
				ft_putchar(argv[1][i++]);
		}
	}
	ft_putchar('\n');
	return (0);
}
