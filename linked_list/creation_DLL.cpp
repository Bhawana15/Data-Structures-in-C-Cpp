/*** CREATION AND DISPLAY OF DOUBLY LINKED LIST ***/

#include <iostream>
using namespace std;

struct NODE_STRUCT{
	int data;
	struct NODE_STRUCT *prev;
	struct NODE_STRUCT *next;
};
typedef struct NODE_STRUCT NODE;

void print_DLL (NODE* head)
{NODE* temp = head;

	int i = 1;
	while (temp != NULL)
	{
		cout << "Node-" << i << "  :  " << temp->data << endl;
		temp = temp->next;
		i++;
	}
}

void create_node (NODE** head_ref, int data) {
	NODE* new_node = new NODE;
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = *head_ref;
	*head_ref = new_node;
	return;
}

int main()
{
	NODE* head = NULL;
	printf("####  PROGRAM FOR CREATION AND DISPLAY OF DOUBLY LINKED LIST  ####\n");
	create_node (&head, 5);
	create_node (&head, 7);
	create_node (&head, 8);
	create_node (&head, 9);
    cout << "The Linked List is : \n";
    print_DLL (head);
	return 0;
}
