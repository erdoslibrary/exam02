
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n >9)
		ft_putnbr(n/10);
	ft_putchar((n % 10) + '0');
}

void tab_multi(char *str)
{
	int i = 1;
	int n = 0;

	while (*str)
	{
		n = n * 10 + (*str - '0');
		str++;
	}

	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i * n);
		ft_putchar('\n');
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		tab_multi(argv[1]);
	ft_putchar('\n');
	return 0;
}

