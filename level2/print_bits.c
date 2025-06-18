
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_bits(unsigned char octet)
{
	int i = 7;
	while (i >= 0)
	{
		// i만큼 오른쪽으로 밀어서 0번 위치로 가게 함. 그래서 1인지 확인
		if ((octet>> i) & 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		i--;
	}
}

// (((octet >> i) & 1) == 1)이 더 정확한 표현이지만,
// C에서는 0이 아닌 값은 참으로 간주되므로, 위와 같이 작성해도 무방

#include <stdlib.h> // EXIT_SUCCESS

int	main(void)
{
	print_bits(3);
	write(1, "\n", 1);
	return (0);
}
