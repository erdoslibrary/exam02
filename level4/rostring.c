
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
	int i = 0;
	int start = -1;
	int end = -1;
	int is_first_word = 1;
	int word_count = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	first_word_start = i;
	while (str[i] && str[i] != '\t' && str[i] != ' ')
		i++;
	fir
}