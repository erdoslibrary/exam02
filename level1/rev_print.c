
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i = 0;

	if(!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void rev_print(char *str)
{
	int len = ft_strlen(str);
	if (len == 0)
		return;
	while (len > 0)
	{
		ft_putchar(str[len - 1]);
		len--;
	}
}

int main(int argc, char **argv)
{
	int len;

	if (argc == 2)
		rev_print(argv[1]);
	ft_putchar('\n');
	return (0);
}

