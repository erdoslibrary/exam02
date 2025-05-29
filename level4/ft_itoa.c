
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int ft_numlen(long n)
{
	int len = 0;

	if (n <= 0)
	{
		len = 1;
		n = -n;
	}
	while (n > 0 )
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char *result;
	int len;
	long num;

	num = nbr;
	len = ft_numlen(num);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	if (num == 0)
		result[0] = '0';
	while (num != 0)
	{
		result[--len] = (num % 10) + '0';
		num /= 10;
	}
	return(result);
}
char *ft_itoa(int nbr)
{
	char *result;
	int len;
	long num = nbr;

	len = ft_numlen(num);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num < 0 )
	{
		result[0] = '-';
		num = -num;
	}
	if (num == 0)
		result[0] = '0';
	while (num != 0)
	{
		result[--len] == (num%10) + '0';
		num /= 10;
	}
	return (result);
}

int	main(void)
{
	int numbers[] = {INT_MAX, INT_MIN, 0, 1, -1, 42, -42};
	int i;

	for (i = 0; i < 7; i++)
	{
		char *str = ft_itoa(numbers[i]);
		if (str)
		{
			printf("ft_itoa(%d) = %s\n", numbers[i], str);
			free(str);
		}
		else
		{
			printf("ft_itoa(%d) = NULL (memory allocation failed)\n", numbers[i]);
		}
	}
	return (0);
}
