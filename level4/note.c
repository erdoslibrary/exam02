
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#ifndef SORT_LIST_H
# define SORT_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	int data;
	struct s_list *next;
}				t_list;


#endif

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
		while(cur->next)
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