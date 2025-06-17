
#include "sort_list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *cur;
	int swap;
	int temp;

	if(!lst)
		return lst;
	swap = 1; // 정렬이 끝나지 않았음
	while (swap) // 정렬이 끝나지 않은 동안에만
	{
		swap = 0;
		cur = lst;
		while (cur->next) // 마지막 노드가 아니라면
		{
			if(!cmp(cur->data, cur->next->data)) // 현재 노드와 다음 노드 값 비교, 만약 정렬 아니라면 if 안으로
			{
				temp = cur->data;
				cur->data = cur->next->data;
				cur->next->data = temp;
				swap = 1;
			}
			cur = cur->next; // 다음 노드로 이동
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
	new_node->data = data; // 새 노드의 데이터 필드에 입력값 저장
	new_node->next = NULL; // 아직 다음 노드 없으니까 초기화
	return new_node;
}

void print_list(t_list *lst) // 연결 리스트의 모든 노드(데이터) 출력
{
	while (lst)
	{
		printf("%d ", lst->data);
		lst = lst->next; // 다음 노드로 이동
	}
	printf("\n");
}

int main(void)
{
	t_list *a = create_node(5);
	t_list *b = create_node(3);
	t_list *c = create_node(7);
	t_list *d = create_node(1);

	a->next = b; // 각 노드의 next 포인터를 이용해 노드 연결
	b->next = c;
	c->next = d;
	d->next = NULL;

	printf("Before sorting: ");
	print_list(a);

	t_list *sorted = sort_list(a, ascending);
	printf("After sorting: ");
	print_list(sorted);

	while (sorted) // 메모리 해제
	{
		t_list *temp = sorted;
		sorted = sorted->next;
		free(temp);
	}
	return 0;
}

