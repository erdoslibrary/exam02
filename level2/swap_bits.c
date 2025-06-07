
#include <stdio.h>
#include <unistd.h>

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

unsigned char swap_bits(unsigned char octet)
{
	return ((octet & 0xF0)>>4 |(octet & 0x0F)<<4);
}

int main(void)
{
	unsigned char input = 100;
	unsigned char output = swap_bits(input);

	printf("입력값: %u\n", input);
	print_bits(input);
	printf("\n");
	printf("출력값: %u\n", output);
	print_bits(output);
	printf("\n");
	return (0);
}



