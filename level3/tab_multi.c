
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n >9)
		ft_putnbr(n/10);
	ft_putchar((n % 10) + '0');
}

void tab_mult(char *str)
{
	int i

}
