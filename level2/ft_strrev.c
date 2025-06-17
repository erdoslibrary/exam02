
#include <stdio.h>

char *ft_strrev(char *str)
{
    int start = 0;
    int end = 0;
    char temp;

    if (!str)
        return 0;
    while(str[end])
        end++;
    if (end == 0) // 빈문자열인 경우
        return str;
    end--; // '\0'은 제외해야 하니까까
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}

// int main(void)
// {
//     char str[] = "hello, world!"; // 배열은 스택에 복사되어 읽기쓰기 가능
//     // 하지만 *str = "hello, world!"를 선언한 경우 읽기 전용이므로 바꿀수가 없다
//     // 이 떄문에 compile 하는 경우 segmentation fault가 발생한다다
//     char *reversed = ft_strrev(str);

//     printf("원본 문자열: %s\n", str);
//     printf("뒤집힌 문자열: %s\n", reversed);
//     return 0;
// }