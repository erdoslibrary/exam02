
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_bits(unsigned char octet)
{
	int i = 7;
	while (i >= 0)
	{
		if ((octet>> i) & 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		i--;
	}
}

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char reversed = 0;
	int i = 0;

	while(i < 8)
	{
		if (octet & (1 << i))
			reversed |= (1 << (7 - i));
		i++;
	}
	return reversed;
}

// int main(void)
// {
// 	unsigned char octet = 5;
// 	unsigned char reversed = reverse_bits(octet);

// 	printf("original: %u\n", octet);
// 	print_bits(octet);
// 	printf("\n");
// 	printf("reversed: %u\n", reversed);
// 	print_bits(reversed);
// 	printf("\n");
// 	return 0;
// }