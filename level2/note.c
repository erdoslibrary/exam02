
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] == '\0')
	{
		i = 0;
		while (s1[i])
		{
			ft_putchar(s1[i]);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}