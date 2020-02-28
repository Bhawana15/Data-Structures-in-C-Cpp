/*** INSERTION OF NODE IN A DOUBLY LINKED LIST AT THE STARTING, END AND AT A POSITION ***/

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

void insert_at_beg (NODE** head_ref, int data) {
	NODE* new_node = new NODE;
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = *head_ref;
	*head_ref = new_node;
	return;
}

void insert_at_end (NODE** head_ref,int data) {
    NODE* new_node = new NODE;
	NODE* temp = *head_ref;
	while (temp->next != NULL)
		temp = temp->next;
	new_node->data = data;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = NULL;
	return;
}

void insert_at_pos (NODE** head_ref, int pos, int data) {
    int i = 1;
    NODE* new_node = new NODE;
    NODE* temp = *head_ref;
    while (i < pos - 1) {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next = new_node;
    new_node->data = data;
    return;
}

int main()
{
	NODE* head = NULL;
	printf("####  INSERTION OF NODE IN A DOUBLY LINKED LIST AT THE STARTING, END AND AT A POSITION  ####\n");
	insert_at_beg (&head, 60);
	insert_at_beg (&head, 50);
	insert_at_beg (&head, 30);
	insert_at_beg (&head, 20);
    cout << "The Linked List is : \n";
    print_DLL (head);

    cout << "Inserting a node at the beginning ....\nThe new linked list is :\n";
    insert_at_beg (&head, 10);
    print_DLL (head);
    cout << "Inserting a node at the end ....\nThe new linked list is :\n";
    insert_at_end (&head, 70);
    print_DLL (head);
    cout << "Inserting a node at position-4 the beginning ....\nThe new linked list is :\n";
    insert_at_pos (&head, 4, 40);
    print_DLL (head);

	return 0;
}
