
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	if (s1[0] == '\0')
	{
		ft_putchar('1');
		ft_putchar('\n');
		return ;
	}
	while (s2[j]!='\0')
	{
		if (s2[j] == s1[i])
			i++;
		if (s1[i] == '\0')
		{
			ft_putchar('1');
			ft_putchar('\n');
			return ;
		}
		j++;
	}
	ft_putchar('0');
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	else
		ft_putchar('\n');
	return 0;
}
