
char ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int n = 2;

	if (argc == 2)
	{
		if(argv[1] <= 1)
			return ;
		while (n <= *argv[1] /2)
		{
			if (argv[1] % n == 0)
				return ;
		}

	}

}
// 푸는 중임
