
#include <stdio.h>
void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int temp;

	i = 0;
	j = 0;
	temp = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
// // 여기서부터는 확인용
// void print_tab(int *tab, unsigned int size)
// {
// 	unsigned int i = 0;
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// int main(void)
// {
// 	int arr[] = {5,2,3,4,5,1};
// 	unsigned int size = 6;

// 	printf("before: ");
// 	print_tab(arr, size);
// 	sort_int_tab(arr, size);

// 	printf("after: ");
// 	print_tab(arr, size);
// 	return 0;
// }
