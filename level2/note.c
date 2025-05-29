
void print_bits(unsigned char octet)
{
	int i = 7;

	while (i >= 0)
	{
		if (octet & (1 << i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}

int is_power_of_2(unsigned int n)
{
	if (n== 0)
		return 0;
	if (n & (n - 1) == 0)
		return 1;
	else
		return 0;
}

int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + result * 10;
		i++;
	}
	return (sign * result);
}
int main(void)
{
	printf(" 입력: %s -> %d", "-111", ft_atoi("111"));
}
unsigned char swap_bits(unsigned char octet)
{
	unsigned char left = (octet & 0xF0) >> 4;
	unsigned char right = (octet & 0x0F) << 4;
	return (left | right);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	if(!str)
		return (0);
	while (*str)
	{
		(1, str++, 1);
	}
}

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (len-- > 0)
			ft_putchar (argv[1][len]);
	}
	ft_putchar('\n');
	return (0);
}
