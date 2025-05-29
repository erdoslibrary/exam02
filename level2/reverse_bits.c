
unsigned char reverse_bits(unsigned char octet)
{
	int i = 0;
	unsigned char result = 0;

	while (i < 8)
	{
		result = result << 1;
		result |= (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return result;
}

unsigned char reverse_bits(unsigned char octet)
{
	int i = 0;
	unsigned char result = 0;

	while(i < 8)
	{
		result = result << 1;
		result |= (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return (result);
}
