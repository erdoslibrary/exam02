
#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    char c;

    if (n > 9)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}   

int is_prime(int n)
{
    int i = 2;

    if (n < 2)
        return 0;
    while (i * i <=n)
    {
        if(n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_atoi(char *s)
{
    int result = 0;
    while(*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }
    return result;
}

int main(int argc, char **argv)
{
    int n = 0;
    int sum = 0;
    int i = 2;

    if (argc != 2)
    {
        ft_putchar('0');
        ft_putchar('\n');
        return 0;
    }
    n = ft_atoi(argv[1]);
    if (n <= 0)
    {
        ft_putchar('0');
        ft_putchar('\n');
        return 0;
    }
    while (i <= n)
    {
        if (is_prime(i))
            sum += i;
        i++;
    }
    ft_putnbr(sum);
    ft_putchar('\n');
    return 0;
}   