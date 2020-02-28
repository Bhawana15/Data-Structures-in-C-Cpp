/* ERROR */
/*** INSERTION OF A NODE IN SINGLY LINKED LIST AT : 
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

void insert_at_beg(NODE **head_ref, int new_data);
void insert_at_end(NODE **end_ref, int new_data, NODE **head_ref);
void insert_after_pos(NODE **head_ref, int new_data, int pos);
void print_LL(NODE **head);

/* Driver function */
int main(void)
{
        NODE *head = NULL, *end = NULL;
        char ch;
	int new_data, choice, pos, node_no = 0;

        printf("PROGRAM FOR INSERTION OF A NODE IN SINGLY LL AT THE BEGINNING OF SLL, THE END OF SLL OR SOME SPECIFIC POSITION\n");
	printf("###############################################################################################################\n");
	printf("The present Singly linked list is EMPTY\n\n");

	do{
	printf("Enter the new number(data) you want to insert in the new node :\t");
        scanf("%d", &new_data);
        printf("Where do you want to insert the new node :\n1)Enter \"1\" to insert at the beginning\n2)Enter \"2\" to insert at the end\n3)Enter \"3\" to insert at some specific position\n4)Enter \"4\" to quit\n");
        scanf("%d", &choice);

                switch(choice){
                        case 1: node_no++;
				insert_at_beg(&head, new_data);
                                break;
                        case 2: node_no++;
				insert_at_end(&end, new_data, &head);
                                break;
                        case 3: if(pos > node_no)
					printf("INVALID NODE NUMBER!!! THERE ARE ONLY %d NODES IN THE LIST\n", node_no);
				else{
					node_no++;
			                printf("Enter the node after which you want to enter the new node :\t");
                                        scanf("%d", &pos);
                                        insert_after_pos(&head, new_data, pos);
				}
                                break;
		        case 4: printf("......QUITING\n\n");
				return 0;
		        default : printf("#### ERROR!!! You've entered something wrong ####\n");
                }

	        printf("Enter \'q\' to quit or enter \'c\' to continue entering data\n");
	       	scanf("%s", &ch);
		printf("\n");
	}while(ch == 99);

	printf("Your Singly Linked List is :\n");
	print_LL(&head);
	printf("......QUITING\n");
        return 0;
}

/* Insertion at the beginning of the linked list */
void insert_at_beg(NODE **head_ref, int new_data)
{
	NODE **start = head_ref;
	NODE *new_node = (NODE *) malloc(sizeof(NODE));
	if(new_node == NULL){
		printf("MEMORY NOT ALLOCATED!!!\n");
		exit(0);
	}
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
	return;
}

/* Insertion at the end of the linked list */
void insert_at_end(NODE **end_ref, int new_data, NODE **head_ref)
{
	 NODE *start = *head_ref;
	 NODE *new_node = (NODE *) malloc(sizeof(NODE));
	 if(new_node == NULL){
                printf("MEMORY NOT ALLOCATED!!!\n");
                exit(0);
         }
	 new_node->data = new_data;
	 new_node->next = NULL;
	 (*end_ref)->next = new_node;
	 return;
}

/* Insertion after pos in the linked list */
void insert_after_pos(NODE **head_ref, int new_data, int pos)
{
	NODE *start = *head_ref;
	NODE *new_node = (NODE *) malloc(sizeof(NODE));
	if(new_node == NULL){
		printf("MEMORY NOT ALLOCATED\n");
		exit(0);
	}
	new_node->data = new_data;
	for(int node_no = 0 ; node_no < pos || *head_ref != NULL ; node_no++)
		*head_ref = (*head_ref)->next;
	new_node->next= (*head_ref)->next;
	(*head_ref)->next = new_node;
	return;
}

/* Printing the linked list */
void print_LL(NODE **head_ref)
{
	int i = 0;
	printf("Singly Linked List at present is : \n");
	while(*head_ref != NULL)
	{
		i++;
		printf("NODE - %d  :  data  =  %d,\taddress  =  %p\n", i, (*head_ref)->data, head_ref);
		*head_ref = (*head_ref)->next;
	}
	return;
}
