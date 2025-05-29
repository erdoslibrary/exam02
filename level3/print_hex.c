

#include <unistd.h>

int	ft_atoi(char *str)
{
	int num = 0;
	while (*str)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return num;
}

void	print_hex(unsigned int num)
{
	char *base = "0123456789abcdef";

	if (num >= 16)
		print_hex(num / 16);
	write(1, &base[num % 16], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		unsigned int num = ft_atoi(argv[1]);
		print_hex(num);

	}
	write(1, "\n", 1);
	return (0);
}
