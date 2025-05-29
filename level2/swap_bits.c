
#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	unsigned char left = (octet & 0xF0) >> 4;
	unsigned char right = (octet & 0x0F) << 4;
	return (left | right);
}

int main(void)
{
	unsigned char input = 100;
	unsigned char output = swap_bits(input);

	printf("입력값: %u\n", input, output);
	printf("출력값: %u\n", output, output);

	return (0);
}


unsigned char swap_bits(unsigned char octet)
{
	return ((octet & 0xF0)>>4 |(octet & 0x0F)<<4);
}
