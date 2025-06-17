
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void put_number(int n)
{
    if (n >= 10)
        put_number(n / 10);
    ft_putchar((n % 10) + '0');
}

void fizzbuzz(void)
{
    int num = 1;
    while (num <= 100)
    {
        if (num % 3 == 0 && num % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (num % 3 == 0)
            write(1, "fizz", 4);
        else if (num % 5 == 0)
            write(1, "buzz", 4);
        else
            put_number(num);
        ft_putchar('\n');
        num++;
    }
}

int main(void)
{
    fizzbuzz();
    return 0;
}

