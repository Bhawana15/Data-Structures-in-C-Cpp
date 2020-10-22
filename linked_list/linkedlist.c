#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

struct list{
	int data;
	struct list *next;
};

typedef struct list node ;

void main()
{
	node *head = NULL , *start = NULL , node1 , node2 ;
	int i;

	start = &node1;
	head = start;
	printf("\n Address in head = %p ans Start = %p\n",head,start);
	node1.data = 80;
	node1.next = &node2;
	printf("\n Data at node1 = %u and Address at node1 = %p\n",node1.data,node1.next);
	node2.data = 50;
	node2.next = NULL;
	printf("\nData at node2 = %u and Address at node2 = %p\n",node2.data,node2.next);

	for(i=0 ; i<2 ; i++)
	{
		printf("%d %p == ",start->data,start->next);
		start = start->next;
	}

	printf("\n");
}
