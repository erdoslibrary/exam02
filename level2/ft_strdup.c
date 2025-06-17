
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    if (!*str)
        return 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strdup(char *str)
{
    int len = ft_strlen(str);
    char *dup = (char *)malloc(len + 1);
    if (!dup)
        return NULL;
    ft_strcpy(dup, str);
    return dup;
}

// int main(void)
// {
//     char *str = "Hello, World!";
//     char *dup = ft_strdup(str);

//     printf("원본: %s\n", str);
//     printf("복제: %s\n", dup);
//     free(dup);
//     return 0;
// }