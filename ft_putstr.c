
#include <unistd.h>

/* 풀이1 */
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

/* 풀이2 */
void ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int main(void)
{
	char *str = "Hello, World!";

	ft_putstr(str);
	write(1,"\n", 1);
	return (0);
}
