
#include <unistd.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return len;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int len = ft_strlen(str);
		int i = len - 1;

		while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
			i--;

		int end = i;
		while (i >= 0 && (str[i] != ' ' && str[i] != '\t'))
			i--;

		int start = i + 1;

		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

