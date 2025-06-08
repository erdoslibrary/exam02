
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void epur_str(char *str)
{
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		while (str[i] && str[i]  != ' ' && str[i] != '\t')
			ft_putchar(str[i++]);
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if(str[i])
			ft_putchar(' ');
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	ft_putchar('\n');
	return 0;
}
