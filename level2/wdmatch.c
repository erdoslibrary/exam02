
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	// s2를 순회하면서 s1을 하나씩 찾음
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if(s1[i] == '\0') // s1의 끝에 도달했는지 확인
	{
		i = 0;
		while (s1[i]) // s1을 출력
			ft_putchar(s1[i++]);
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
