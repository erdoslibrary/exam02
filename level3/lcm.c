
#include <stdio.h>
unsigned int gcd(unsigned int a, unsigned int b)
{
	unsigned int temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return 0;
	return (a * b / gcd(a, b));
}

int main(void)
{
	unsigned int a = 12;
	unsigned int b = 18;

	printf("gcd 결과: %u\n", gcd(a, b));
	printf("lcm 결과: %u\n", lcm(a, b));
	return 0;
}
