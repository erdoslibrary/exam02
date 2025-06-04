
#include <unistd.h>

void print_repeat(char c, int n)
{
	while(n--)
		write(1, &c, 1);
}

void repeat_alpha(char *str)
{
	int repeat;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			repeat = *str - 'a' + 1;
		else if (*str >= 'A' && *str <= 'Z')
			repeat = *str - 'A' + 1;
		else
			repeat = 1;
		print_repeat(*str, repeat);
		str++;
	}	
}


int main(int argc, char **argv)
{
	int repeat;

	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return(0);
}




