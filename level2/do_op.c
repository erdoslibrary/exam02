

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[3]);
        char op = argv[2][0];
        int result;

        if (op == '+')
            result = a + b;
        else if (op == '-')
            result = a - b;
        else if (op == '*')
            result = a * b;
        else if (op == '/')
        {
            if (b == 0)
                return 0;
            result = a / b;
        }
        else if (op == '%')
        {
            if (b == 0)
                return 0;
            result = a % b;
        }
        else
            return (0);
        printf("%d\n", result);
    }
    else
        write(1, "\n", 1);
    return (0);
}
