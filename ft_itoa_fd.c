
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		c = '0' + n % 10;
		write(fd, &c, 1);
	}
	else
	{
		c = '0' + n;
		write(fd, &c, 1);
	}
}

int	main(void)
{
	int numbers[] = {INT_MAX, INT_MIN, 0, 1, -1, 42, -42};
	int i;

	for (i = 0; i < 7; i++)
	{
		char *str = ft_itoa(numbers[i]);
		if (str)
			printf("ft_itoa(%d) = %s\n", numbers[i], str);
		else
			printf("ft_itoa(%d) = NULL (memory allocation failed)\n", numbers[i]);
	}
	return (0);
}
