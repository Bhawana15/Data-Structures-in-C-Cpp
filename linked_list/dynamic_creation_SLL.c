/** PROGRAM FOR CREATION AND DISPLAY OF SINGLY LINKED LIST DYNAMICALLY AND FINDNG SUM OF THEIR DATA **/

#include <stdio.h>
#include <stdlib.h>

struct NODE_STRUCT{
	int data;
	struct NODE_STRUCT *next;
};
typedef struct NODE_STRUCT NODE;

int main()
{
	NODE *head = NULL, *start = NULL, *node1, *node2, *node3;
	int i, sum = 0;

	printf("PROGRAM FOR CREATION AND DISPLAY OF SINGLY LINKED LIST DYNAMICALLY AND FINDNG SUM OF THEIR DATA\n");
	node1 = (NODE *) malloc(sizeof(NODE));
	node2 = (NODE *) malloc(sizeof(NODE));
	node3 = (NODE *) malloc(sizeof(NODE));

	start = node1;
	head = start;
	node1->data = 10;
	node1->next = node2;
	node2->data = 20;
	node2->next = node3;
	node3->data = 30;
	node3->next = NULL;

	for(i = 0 ; i < 3 ; i++)
	{	sum += start->data;
		printf("NODE - %d :  data = %d\t, address = %p\n", i+1, start->data, start->next);
		start = start->next;
	}
	printf("Sum of the data of 3 nodes = %d\n", sum);
	return 0;
}
