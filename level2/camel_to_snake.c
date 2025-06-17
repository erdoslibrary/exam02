
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 'a' - 'A');
    return c;
}

void camel_to_snake(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            ft_putchar('_');
            ft_putchar(to_lower(str[i++]));
        }
        else
            ft_putchar(str[i++]);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        camel_to_snake(argv[1]);
    ft_putchar('\n');
    return 0;
}