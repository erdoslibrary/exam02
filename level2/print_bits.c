
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
	}
}

#include <stdlib.h> // EXIT_SUCCESS

int	main(void)
{
	print_bits(0x0);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x1);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x2);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x3);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x4);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x5);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x6);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x7);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x8);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0x9);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(0xa);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(42);
	ft_putchar_fd('\n', STDOUT_FILENO);
	print_bits(69);
	ft_putchar_fd('\n', STDOUT_FILENO);
	return (EXIT_SUCCESS);
}
