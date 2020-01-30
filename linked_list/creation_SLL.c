/*** CREATION AND DISPLAY OF SINGLY LINKED LIST ***/

#include <stdio.h>

struct NODE_STRUCT{
	int data;
	struct NODE_STRUCT *next;
};
typedef struct NODE_STRUCT NODE;

int main()
{
	NODE *head = NULL, *start = NULL, node1, node2;
	int i;

	start = &node1;
	head = start;
	node1.data = 10;
	node1.next = &node2;
	node2.data = 20;
	node2.next = NULL;

	printf("####  PROGRAM FOR CREATION AND DISPLAY OF SINGLY LINKED LIST  ####\n");
	for(i = 0 ; i < 2 ; i++)
	{
		printf("NODE - %d : data = %d\taddress = %p\n", i+1, start->data, start->next);
		start = start->next;
	}
	return 0;
}
