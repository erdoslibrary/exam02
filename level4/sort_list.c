
#include "sort_list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *cur;
	int swap;
	int temp;

	if(!lst)
		return lst;
	swap = 1;
	while (swap)
	{
		swap = 0;
		cur = lst;
		while (cur->next)
		{
			if(!cmp(cur->data, cur->next->data))
			{
				temp = cur->data;
				cur->data = cur->next->data;
				cur->next->data = temp;
				swap = 1;
			}
			cur = cur->next;
		}
	}
	return lst;
}

int ascending(int a, int b)
{
	return (a <= b);
}

t_list *create_node(int data)
{
	t_list *new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return NULL;
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

void print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d ", lst->data);
		lst = lst->next;
	}
	printf("\n");
}

int main(void)
{
	t_list *a = create_node(5);
	t_list *b = create_node(3);
	t_list *c = create_node(7);
	t_list *d = create_node(1);

	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;

	printf("Before sorting: ");
	print_list(a);

	t_list *sorted = sort_list(a, ascending);
	printf("After sorting: ");
	print_list(sorted);

	while (sorted)
	{
		t_list *temp = sorted;
		sorted = sorted->next;
		free(temp);
	}
	return 0;
}

