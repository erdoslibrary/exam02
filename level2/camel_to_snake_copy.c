
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

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                ft_putchar('_');
                ft_putchar(to_lower(argv[1][i++]));
            }
            else
                ft_putchar(argv[1][i++]);
        }
    }
    ft_putchar('\n');
    return 0;
}