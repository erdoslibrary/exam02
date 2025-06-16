

#include <stdlib.h>
#include <stdio.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

// void ft_list_remove(t_list **begin_list, void *data_ref, int (*cmp)())
// {
//     t_list *curr;
//     t_list *tmp;

//     // 1. 리스트 맨 앞부터 삭제 대상일 경우
//     while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
//     {
//         tmp = *begin_list;
//         *begin_list = (*begin_list)->next;
//         free(tmp);
//     }

//     // 2. 그 외 일반 케이스
//     curr = *begin_list;
//     while (curr && curr->next)
//     {
//         if (cmp(curr->next->data, data_ref) == 0)
//         {
//             tmp = curr->next;
//             curr->next = curr->next->next;
//             free(tmp);
//         }
//         else
//             curr = curr->next;
//     }
// }

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

// 예시: 문자열 비교용
int cmp_str(void *a, void *b)
{
    char *s1 = (char *)a;
    char *s2 = (char *)b;
    int i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s ", (char*)lst->data);
        lst = lst->next;
    }
    printf("\n");
}

int main(void)
{
    t_list *a = malloc(sizeof(t_list));
    t_list *b = malloc(sizeof(t_list));
    t_list *c = malloc(sizeof(t_list));
    t_list *d = malloc(sizeof(t_list));
    t_list *e = malloc(sizeof(t_list));
    a->data = "hello"; a->next = b;
    b->data = "42";    b->next = c;
    c->data = "world"; c->next = d;
    d->data = "42";    d->next = e;
    e->data = "test";  e->next = NULL;

    t_list *head = a;

    print_list(head);
    ft_list_remove(&head, "42", cmp_str);
    print_list(head);

    while (head)
    {
        t_list *tmp = head;
        head = head->next;
        free(tmp);
    }
    return 0;
}
