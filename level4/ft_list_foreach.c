

#include "ft_list_foreach.h"

// 어떤 함수의 주소를 받음. 리스트 각 노드의  data에 대해 f 함수를 실행한다.
void ft_list_foreach(t_list *begin_list, void (*f)(void *)) 
{
	while (begin_list != NULL)
	{
		(*f)(begin_list -> data); // 현재 노드의 데이터 필드에 있는 값을 f 함수에 전달
		begin_list = begin_list->next; // 다음 노드로
	}
}

