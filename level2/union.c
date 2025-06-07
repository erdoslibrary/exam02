
#include <unistd.h>

int check_char(char *str, int len, char c)
{
    int i = 0;
    while (i < len && str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int i = 0;
        while (argv[1][i])
        {
            if(!check_char(argv[1], i, argv[1][i]))
                write(1, &argv[1][i], 1);
            i++;
        }
        int j = 0;
        while (argv[2][j])
        {
            int in_first = check_char(argv[1], i, argv[2][j]);
            int in_self = check_char(argv[2], j, argv[2][j]);
            if(!in_first && !in_self)
                write(1, &argv[2][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}