
#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void search_and_replace(char *str, char old_char, char new_char)
{
	while (*str)
	{
		if (*str == old_char)
			ft_putchar(new_char);
		else
			ft_putchar(*str);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 4 && argv[2][0] && argv[3][0] && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		char *str = argv[1];
		char old = argv[2][0];
		char new = argv[3][0];
		search_and_replace(str, old, new);
	}
	ft_putchar('\n');
	return (0);
}