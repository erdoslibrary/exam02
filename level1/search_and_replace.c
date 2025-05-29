
#include <unistd.h>


int main(int argc, char **argv)
{
	char *str;

	if (argc==4 && argv[2][1]=='\0'&& argv[3][1]== '\0')
	{
		str = argv[1];
		while (*str)
		{
			if (*str == argv[2][0])
				*str = argv[3][0];
			write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

