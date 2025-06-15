
#include <stdlib.h>

int ft_numlen(long n)
{
	int len = 0;
	if (n < 0)
	{
		len = 1;
		n = -n;
	}
	while (n >0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int nbr)
{
	char *result;
	int len;
	long num;

	num = nbr;
	len = ft_numlen(num);
	result = (char *)malloc(len + 1);
	if(!result)
		return (NULL);
	result[len] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	if (num == 0)
		result[0] = '0';
	while(num!=0)
	{
		result[--len] = (num%10) + '0';
		num /= 10;
	}
	return (result);
}
