
#include <stdio.h>

int char_to_int(char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	if (c >= 'a' && c <= 'f')
		return c - 'a' + 10;
	if (c >= 'A' && c <= 'F')
		return c - 'A' + 10;
	return -1;
}

int	ft_atoi_base(const char *str, int base)
{
	int result = 0;
	int sign = 1;
	int value;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		value = char_to_int(*str);
		if (value < 0 || value >= base)
			break;
		result = result * base + value;
		str++;
	}
	return result * sign;
}


int main(void)
{
	// 테스트 예시
	printf("Input: \"1a\", Base: 16 → Result: %d\n", ft_atoi_base("1a", 16));
	// 26
	printf("Input: \"1010\", Base: 2 → Result: %d\n", ft_atoi_base("1010", 2));
	// 10
	printf("Input: \"-ff\", Base: 16 → Result: %d\n", ft_atoi_base("-ff", 16));
	// -255
	printf("Input: \"123\", Base: 10 → Result: %d\n", ft_atoi_base("123", 10));
	// 123
	printf("Input: \"7b\", Base: 16 → Result: %d\n", ft_atoi_base("7b", 16));
	// 123
	printf("Input: \"zzz\", Base: 16 → Result: %d\n", ft_atoi_base("zzz", 16));
	// 0 (invalid input)
	printf("Input: \"77\", Base: 8 → Result: %d\n", ft_atoi_base("77", 8));
	// 63

	return 0;
}
