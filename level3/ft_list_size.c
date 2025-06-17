
#include "ft_list_size.h"


int ft_list_size(t_list *begin_list)
{
	int count = 0;
	t_list *current = begin_list;

	while(current)
	{
		count++;
		current = current->next;
	}
	return count;
}

// // 노드 하나 생성 (data는 void *로 받음)
// t_list *create_node(void *data)
// {
// 	t_list *node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return NULL;
// 	node->data = data;
// 	node->next = NULL;
// 	return node;
// }

// int main(void)
// {
// 	t_list *head = create_node("First");
// 	head->next = create_node("Second");
// 	head->next->next = create_node("Third");

// 	printf("List size: %d\n", ft_list_size(head));  // 예상 출력: 3

// 	return 0;
// }
