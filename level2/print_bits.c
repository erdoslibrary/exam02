
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_bits(unsigned char octet)
{
	int i = 7;
	while (i >= 0)
	{
		if ((octet>> i) & 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		i--;
	}
}

#include <stdlib.h> // EXIT_SUCCESS

int	main(void)
{
	print_bits(3);
	write(1, "\n", 1);
	return (0);
}
