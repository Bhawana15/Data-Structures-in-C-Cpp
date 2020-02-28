/*** DELETION  OF A NODE IN SINGLY LINKED LIST AT : 
 * 1) THE BEGINNING OF SLL
 * 2) THE END OF SLL
 * 3) SOME SPECIFIC POSITION
 * NOTE : The Linked List is empty at the starting ***/

#include <stdio.h>
#include <stdlib.h>

struct NODE_STRUCT{
        int data;
        struct NODE_STRUCT *next;
};
typedef struct NODE_STRUCT NODE;

void delete_first(NODE *head);
void delete_last(NODE *end, NODE *prev, NODE *head);
void delete_at_pos(NODE *head, int pos);
void print_LL(NODE *head);

/* Driver function */
int main()
{
	NODE *head = NULL, *end = NULL, *prev = NULL, node1, node2, node3, node4;
	int choice, pos;
	printf("PROGRAM FOR DELETION OF A NODE IN SINGLY LL FROM THE BEGINNING OF SLL, THE END OF SLL OR SOME SPECIFIC POSITION\n");
        printf("###############################################################################################################\n");
        head = &node1;
        node1.data = 10;
        node1.next = &node2;
        node2.data = 20;
        node2.next = &node3;
        node3.data = 30;
        node3.next = &node4;
	prev = &node3;
        node4.data = 40;
        node4.next = NULL;
	end = &node4;

	printf("The linked list is :\n");
	print_LL(head);

	if(head == NULL){
                printf("UNDERFLOW\n....... QUITING!!!\n");
	        exit(0);
        }
                     
	else{
                printf("Which node do you want to delete :\n1)Enter \"1\" to delete the first node\n2)Enter \"2\" to delete the last node\n3)Enter \"3\" to delete some specific node\n4)Enter \"4\" to quit\n");
                scanf("%d", &choice);

	        switch(choice)
	        {
		        case 1: delete_first(head);
			        break;
		        case 2: delete_last(end, prev, head); 	
				break;
			case 3: printf("Enter the node number you want to delete :\t");
				scanf("%d", &pos);
				if(pos > 4 || pos <= 0)
				{
					printf("Nodes are in the range of 1 to 4.... Nothing less than 1 or greater than 4 is acceptable\n");
					printf("...... QUITING\n");
					exit(0);
				}
				else
				{
					if(pos == 1)
						delete_first(head);
					else if(pos == 4)
						delete_last(end, prev, head);
					else
				                delete_at_pos(head, pos);	
				}
				break;
			case 4: printf("### END OF THE PROGRAM ###\n");
			        exit(0);
			default: printf("INVALID CHOICE!!! EXITING .....\n\n");
		}
	}		
	return 0;
}

/* Funtion to delete the first node */
void delete_first(NODE *head)
{
	int temp = head->data;
	head = head->next;
	print_LL(head);
	return;
}

/* Function to delete the last node */
void delete_last(NODE *end, NODE *prev, NODE *head)
{
	int temp = end->data;
	prev->next = NULL;
	end = prev;
	print_LL(head);
	return;
}

/* Function to delete a node at pos such that 1 < pos < 4 */
void delete_at_pos(NODE *head, int pos)
{
	NODE *start = head;
	for(int i = 1 ; start != NULL && i < pos - 1 ; i++)
		start = start->next;

	NODE *temp = (start->next)->next;
	(start->next)->next = NULL;
	start->next = temp;
	print_LL(head);
	return;
}
		
/* Printing the linked list */
void print_LL(NODE *head)
{
        int i = 0;
	printf("Singly Linked List after deletion is :\n");
        while(head != NULL)
        {
                i++;
                printf("NODE - %d : data  =  %d,\taddress  =  %p\n", i, head->data, head);
		head = head->next;
        }
        return;
}
