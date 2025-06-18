
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int max(int *tab, unsigned int n)
{
	unsigned int i = 0;
	int m;

	if(!tab || n == 0)
		return 0;
	m = tab[0];
	while (i < n)
	{
		if(tab[i] > m)
			m = tab[i];
		i++;
	}
	return m;
}

int main(void)
{
    int arr[] = {1, 5, 3, 9, 2};
    int arr2[] = {};
    printf("arr 최대값: %d\n", max(arr, 5));
    printf("arr2 최대값: %d\n", max(arr2, 0));
    return 0;
}