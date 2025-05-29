
#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	if (!str)
		return ;
	while (str[i])
		write(1, &str[i++], 1);
}

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main(void)
{
	ft_putstr("Hello, World!\n");
	return (0);
}
