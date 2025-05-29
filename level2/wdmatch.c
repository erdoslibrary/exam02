
#include <unistd.h>

void ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return 0;
	}

	char *s1 = argv[1];
	char *s2 = argv[2];
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		while (s2[j] && s2[j] != s1[i])
			j++;
		if (s2[j] == '\0')
		{
			write(1, "\n", 1);
			return 0;
		}
		j++;
		i++;
	}
	ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
