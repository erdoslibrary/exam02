
# include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rstr_capitalizer(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					ft_putchar(str[i]- ('a' - 'A'));
				else 
					ft_putchar(str[i]);
			}
			else // 다음 문자가 공백이 아니면 소문자로 변환
			{ 
				if (str[i] >= 'A' && str[i] <= 'Z')
					ft_putchar(str[i] + ('a' - 'A'));
				else
					ft_putchar(str[i]);
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i < argc)
	{
		rstr_capitalizer(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);

}