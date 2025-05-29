
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	if(!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int main(void)
{
	char str1[] = "Hello";

	printf("%s의 길이: %d\n", str1, ft_strlen(str1));
	return (0);
}
