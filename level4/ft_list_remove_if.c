
// 명원님 제공 ...??
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "ft_list_remove_if.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)()) // data_ref 비교 기준이 되는 데이터 포인터
{
    t_list **cur;
    t_list *temp;

    cur = begin_list;
    while (*cur != NULL)
    {
        if(!(cmp((*cur)->data, data_ref))) // 현재 노드의 데이터와 data_ref를 비교하여 같지 않으면
        {
            temp = *cur; // 현재 노드 저장
            *cur = (*cur)->next; // 다음 노드로 보내고
            free(temp); // 현재 노드 메모리 해제 // prev -> [삭제노드] -> next
			// 현재 노드가 삭제되었으므로 cur는 변경된 next를 가리키고, 다음 반복에서 cur는 자동으로 다음 노드를 가리킴
        } 
        else
            cur = &(*cur)->next; // 삭제 대상 아니면 다음 노드로 다음 노드 포인터로 옮긴다.
    }
}