
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char alpha_mirror(char c)
{
    if (c >= 'a' && c <= 'z')
        return ('a' + 'z' - c);
    else if (c >= 'A' && c <= 'Z')
        return ('A' + 'Z' - c);
    else
        return c;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        while (*argv[1])
            ft_putchar(alpha_mirror(*argv[1]++));
    }
    ft_putchar('\n');
    return 0;
}