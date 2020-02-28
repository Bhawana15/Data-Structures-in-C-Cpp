// INSERTION SORT IN A SINGLY LINKED LIST IN C++

#include <iostream>
using namespace std;

typedef struct NODE {
	int data;
	struct NODE* next;
} node;

void print_LL (node* head) {
	node* temp = head;
	int i = 0;
	while (temp != NULL) {
		cout << "Node-" << i << " :  " << temp->data << endl;
        temp = temp->next;
        i++;
	}
	return;
}

void push (node** head_ref, int data) {
	node* new_node = new node;
	new_node->data = data;
	new_node->next = *head_ref;
	*head_ref = new_node;
	return;
}

void insertion_sort (node** head_ref) {
	node* insertionPtr = *head_ref;
	node* current = insertionPtr->next;

	while (current != NULL) {
		insertionPtr = *head_ref;
		while (insertionPtr != current) {
			if (insertionPtr->data > current->data) {
				int temp = insertionPtr->data;
				insertionPtr->data = current->data;
				current->data = temp;
			}
			else
				insertionPtr = insertionPtr->next;
		}
		current = current->next;
	}
	return;
}

int main()
{
	cout << "######  INSERTION SORT IN A SINGLY LINKED LIST IN C++  ######\n";
	node* n = NULL;
	push (&n, 50);
	push (&n, 2);
	push (&n, 96);
	push (&n, 87);
	push (&n, 20);

	cout << "Linked List before sorting :\n";
	print_LL(n);

	insertion_sort (&n);

	cout << "Linked List after sorting :\n";
	print_LL(n);

	return 0;
}