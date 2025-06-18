
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int *arr ;
	int size;
	int i = 0;
	int step;

	if (start <= end)
	{
		size = end - start + 1;
		step = 1;
	}
	else
	{
		size = start - end + 1;
		step = -1;
	}
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	while (i < size)
	{
		arr[i] = start;
		start = start + step;
		i++;
	}
	return (arr);
}

int main(void)
{
	int *arr = ft_range(-2, 1);
	int i = 0;
	while (i < 4)
	{
		printf("%d", arr[i]);
		i++;
		printf(" ");
	}
	free(arr);
	printf("\n");
	return 0;
}
