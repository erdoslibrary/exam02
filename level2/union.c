#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (j < i && argv[1][j] != argv[1][i])
				j++;
			if (j == i)
				write(1, &argv[1][i], 1);
			i++;
		}

		i = 0;
		while (argv[2][i])
		{
			j = 0;
			while (argv[1][j] && argv[1][j] != argv[2][i])
				j++;
			if (argv[1][j] == '\0')
			{
				j = 0;
				while (j < i && argv[2][j] != argv[2][i])
					j++;
				if (j == i)
					write(1, &argv[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
