
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	const char *s_ptr = s;
	const char *r_ptr;

	while (*s_ptr)
	{
		r_ptr = reject;
		while (*r_ptr)
		{
			if (*s_ptr == *r_ptr)
				return (s_ptr - s);
			r_ptr++;
		}
		s_ptr++;
	}
	return (s_ptr - s);
}

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j= 0;

	while (s[i])
	{
		while (reject[j])
		{
			if(s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	return i++;
}



int main(void)
{
	char *str = "hello, world";
	char *reject = ",!";
	size_t len = ft_strcspn(str, reject);

	printf("처음 나오는 위치 %zu\n", len);
	printf("결과: %.*s\n", (int)len, str);
	return (0);
}


int mian(void)
{
	char *str = "hello, world";
	char *reject = ",!";

	printf("처음 나오는 위치: %zu\n", len);
	printf("결과: %.*s\n", (int)len, str);
}
