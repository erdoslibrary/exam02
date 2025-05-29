
#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if ( n > 9 )
		ft_putnbr(n/10);
	ft_putchar((n % 10) + '0');
}


int main(void)
{
	int i = 0;
	while (++i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzbuzz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else
			ft_putnbr(i);
		write(1, "\n", 1);
	}
	return (0);
}
