
#include <stdio.h>
#include <stdlib.h>


void fprime(int n) // 소인수분해
{
	int div = 2;
	int first = 1;

	if (n == 1)
	{
		printf("1");
		return ;
	}
	while (n > 1)
	{
		if (n % div == 0)
		{
			if(!first)
				printf("*");
			printf("%d", div);
			first = 0;
			n /= div;
		}
		else
			div++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		fprime(atoi(argv[1]));
	}
	printf("\n");
	return (0);
}
