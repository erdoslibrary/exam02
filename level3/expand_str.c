
#include <unistd.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

void expand_str(char *str)
{
    int i = 0;

    // 여백 스킵
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    // 문자열 출력 부분
    while (str[i])
    {
        while (str[i] && str[i] != ' ' && str[i] != '\t')
        {
            ft_putchar(str[i]);
            i++;
        }
        // 공백 여백 만나면 패스
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        if(str[i])
        {
            ft_putchar(' ');
            ft_putchar(' ');
            ft_putchar(' ');
        }
    }   
}

int main(int argc, char **argv)
{
    if (argc == 2)
        expand_str(argv[1]);
    ft_putchar('\n');
    return 0;
}