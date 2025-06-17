

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_word(char *str, int start, int end)
{
	int i = start;
	while (i < end)
		ft_putchar(str[i++]);
}

void rostring(char *str)
{
	int i = 0, start = -1, end = -1;
	int first_word_start = -1, first_word_end = -1;
	int word_count = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	first_word_start = i;
	while (str[i] && str[i] != '\t' && str[i] != ' ')
		i++;
	first_word_end = i;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		end = i;
		if (end > start)
		{
			if(word_count)
				ft_putchar(' ');
			print_word(str, start, end);
			word_count++;
		}
	}
	if (first_word_end > first_word_start)
	{
		if(word_count)
			ft_putchar(' ');
		print_word(str, first_word_start, first_word_end);
	}
}

int main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	ft_putchar('\n');
	return 0;
}