
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	char *origin;

	origin = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (origin);
}

int main(void)
{
	char dest[100];
	char *src = "Hello world!";

	ft_strcpy(dest, src);

	printf("복사된 문자열: %s\n", dest);
	return (0);
}

