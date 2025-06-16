
#include "ft_list_remove.h"
#include <stdlib.h>

void ft_list_remove(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;
	t_list *prev;
	t_list *temp;

	if (begin_list == NULL || *begin_list == NULL)
		return;
	current = *begin_list;
	prev = NULL;
	while (current)
	{
		if(cmp(current->data, data_ref) == 0)
		{
			temp = current;
			if(prev == NULL)
				*begin_list = current->next;
			else
				prev->next = current->next;
			current = current->next;
			free(temp);
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}
