
#include <stdio.h>

int ft_atoi(const char *str)
{
	int sign = 1;
	int result = 0;

	while ((*str >= '\t' && *str <= '\r') || (*str == ' '))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = (*str - '0') + result * 10;
		str++;
	}
	return (sign * result);
}

int main(void)
{
	printf("입력: %s -> %d\n", "-456", ft_atoi("-456"));
	return 0;
}

