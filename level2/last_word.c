
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void last_word(char *str)
{
    int i = 0;
    int start = -1;
    int end = -1;

    while (str[i])
        i++;
    if (i == 0)
        return ;
    i--;
    
    // 뒤 쪽 공백 처리
    while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
        i--;
    if (i < 0)
        return ; 
    end = i;

    while (i >= 0 && (str[i] != ' ' && str[i] != '\t'))
        i--;
    start = i + 1; // 공백 다음 문자를 찾아야 하니까

    while (start <= end)
        ft_putchar(str[start++]);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    ft_putchar('\n');
    return 0;
}