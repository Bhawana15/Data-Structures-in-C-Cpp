// Detect and Remove loop in a linked list
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* getNode(int data) {
	struct Node* new_node = new Node;
	new_node->data = data;
	new_node->next = nullptr;
	return new_node;
}

void detectNremoveCycle(struct Node** headref) {
	if (*headref == NULL || (*headref)->next == NULL)
		return;

	struct Node* slow = *headref, *fast = *headref, *ptr = NULL;
	while(slow && fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}
	if(slow != fast) {
		cout << "No loop exists, the Linked list is :\n";
		return;
	}

	cout << "Linked list after removal of loop is :\n";
	slow = *headref;
	while(slow != fast) {
		ptr = fast;
		slow = slow->next;
		fast = fast->next;
	}
	ptr->next = NULL;
}

void printLL(struct Node* head) {
	while(head) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<"\n";
}

int main()
{
	struct Node* head = getNode(1);
	head->next = getNode(2);
	head->next->next = getNode(3);
	head->next->next->next = getNode(4);
	head->next->next->next->next = getNode(5);
cout <<"hef\n";
	head->next->next->next->next->next = head->next->next;
	detectNremoveCycle(&head);
	printLL(head);
	return 0;
}