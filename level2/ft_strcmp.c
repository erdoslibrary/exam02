
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main(void)
{
	char *a = "hello";
	char *b = "helloa";

	int result = ft_strcmp(a, b);
	printf("비교 결과: %d\n", result);
	return (0);
}
return (unsigned char)*s1 - (unsigned char)*s2;
}
