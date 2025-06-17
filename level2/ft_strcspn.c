
#include <stdio.h>


size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if(s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	return i;
}

// int main(void)
// {
// 	char *str = "hello, world";
// 	char *reject = ",!";
// 	size_t len = ft_strcspn(str, reject);

// 	printf("처음 나오는 위치 %zu\n", len);
// 	printf("결과: %.*s\n", (int)len, str);
// 	return (0);
// }
