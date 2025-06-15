

#include <stdio.h>
#include <stdlib.h>
int *ft_rrange(int start, int end)
{
    int *arr;
    int size;
    int i = 0;
    int step;

    // 시작값과 끝값에 따라 배열 크기와 증감 방향 결정
    if (start <= end)
    {
        size = end - start + 1;
        step = -1;  // 역순으로 값을 채움
    }
    else
    {
        size = start - end + 1;
        step = 1;   // 역순으로 값을 채움
    }
    
    // 메모리 할당
    arr = (int *)malloc(sizeof(int) * size);
    if (!arr)
        return (NULL);
    
    // 배열에 역순으로 연속 값 채우기 (end부터 start까지)
    while (i < size)
    // {
        arr[i] = end;  // end에서 시작
        end = end + step;   // end를 증감
        i++;
    }
    return (arr);
}

int main(void)
{
	int *arr = ft_rrange(-2, 1);
	int i = 0;
	while (i < 4)
	{
		printf("%d", arr[i]);
		i++;
		printf(" ");
	}
	free(arr);
	return 0;
}