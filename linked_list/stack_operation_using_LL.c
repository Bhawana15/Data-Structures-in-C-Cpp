// PROGRAM TO REPRESENT STACK AND PERFORM OPERATIONS LIKE PUSH AND POP USING LINKED LIST IN C

#include <stdio.h>

typedef struct STACK_NODE{
	int value;
	struct STACK_NODE *next;
}stack;

int main()
{
	stack *top = NULL;
	int choice, data;
	printf("PROGRAM TO REPRESENT STACK AND PERFORM OPERATIONS LIKE PUSH AND POP USING LINKED LIST IN C\n");
	printf("##########################################################################################\n");
	do{
                printf("#### MENU ####\n");
                printf("1. Push item into the stack\n");
                printf("2. Pop item from the stack\n");
                printf("3. Quit\n");
                printf("Enter your choice :\n");
                scanf("%d", &choice);

                switch(choice){
                        case 1: printf("Enter number to be pushed :\n");
                                scanf("%d", &data);
                                push(data, &top);
                                break;
                        case 2: pop(&top);
                                break;
                        case 3: printf("\n !!!!!!!!!!!! FINISH !!!!!!!!!!!!\n");
                }
       	}while(choice != 3);

	return 0;
}

// Push operation is equivalent to inserting new node at the beginning of the Linked List
void push(int data, stack **top_ref )
{
	stack *front = *top_ref;
	front->value = data;
	front->next = (*top_ref)->next;
	return;
}

void pop(stack **top_ref)
{
	stack *front = *top_ref;

