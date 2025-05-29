
#include <unistd.h>

void repeat_and_print(char c, int n)
{
	while(n--)
		write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int repeat;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat = argv[1][i] - 'a' + 1;
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				repeat = argv[1][i] - 'A' + 1;
			else
				repeat = 1;
			repeat_and_print(argv[1][i], repeat);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
