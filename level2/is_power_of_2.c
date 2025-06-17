
#include <stdio.h>
int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if ((n & ( n - 1)) == 0)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	unsigned int n = 16;

// 	if (is_power_of_2(n))
// 		printf("%u은 2의 제곱수입니다.\n", n);
// 	else
// 		printf("%u은 2의 제곱수가 아닙니다다.\n", n);
// }