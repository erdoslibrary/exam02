#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void hidenp(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    // 빈 문자열은 항상 숨겨져 있음
    if (s1[0] == '\0')
    {
        ft_putchar('1');
        return;
    }

    // s2에서 s1의 각 문자를 순서대로 찾기
    while (s1[i] && s2[j])
    {
        if (s2[j] == s1[i])
            i++;
        j++;
    }

    // s1의 모든 문자를 찾았는지 확인
    if (s1[i] == '\0')
        ft_putchar('1');
    else
        ft_putchar('0');
}

int main(int argc, char **argv)
{
    if (argc == 3)
        hidenp(argv[1], argv[2]);
    ft_putchar('\n');
    return 0;
}
