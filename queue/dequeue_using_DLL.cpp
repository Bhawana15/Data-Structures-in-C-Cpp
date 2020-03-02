// Dequeue is Double-Ended Queue. 
// Insertion and deletion can occur at both the ends of the queue. Dequeue is of two types :
// Input-Restricted Dequeue : Deletion can ocuur at both the ends but insertion can occur only at one end
// Output-Restricted Dequeue : Insertion can ocuur at both the ends but deletion can occur only at one end

#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *prev, *next;

	static Node* createNode (int data) {
		Node* newNode = new Node;
		newNode->data = data;
		newNode->prev = NULL;
		newNode->next = NULL;
		return newNode;
	}
};

class Dequeue {
	public :
	Node *front, *rear;
	Dequeue () {
		front = NULL;
		rear = NULL;
	}

	void insert_front (int x);
	void insert_rear (int x);
	void delete_front ();
	void delete_rear ();
	void print_Q ();
};

void Dequeue::insert_front (int x) {
	Node* newNode = Node::createNode(x);

    // If true, new element cannot be inserted
	if (newNode == NULL)
		cout << "DEQUEUE OVERFLOW\n";

    else {
    	// If dequeue is empty
    	if (front == NULL){
    		front = newNode;
    		rear = newNode;
    	}
    	// Otherwise, insert at front end
    	else {
    		newNode->next = front;
    		front->prev = newNode;
    		front = newNode;
    	}
    }
	return;
}

void Dequeue::insert_rear (int x) {
	Node* newNode = Node::createNode(x);

	// If true, new element cannot be inserted
	if (newNode == NULL)
		cout << "DEQUEUE OVERFLOW\n";
	else {
		// If dequeue is empty
		if (rear == NULL) {
			front = newNode;
			rear = newNode;
		}
		// Otherwise, insert at rear end
		else {
			newNode->prev = rear;
			rear->next = newNode;
			rear = newNode;
		}
	}
	return;
}

void Dequeue::delete_front () {
	// If dequeue is empty
	if (front == NULL)
		cout << "DEQUEUE UNDERFLOW\n";
	// Otherwise, delete Node at the front end
	else {
		Node* temp = front;
		front = front->next;

        // If deleted Node was the last Node
		if (front == NULL)
			rear = NULL;
		else
			front->prev = NULL;
		delete (temp);
	}
	return;
}

void Dequeue::delete_rear () {
	// If dequeue is empty
	if (front == NULL)
		cout << "DEQUEUE UNDERFLOW\n";
	// Otherwise, delete Node at the front end
	else {
		Node* temp = rear;
		rear = rear->prev;

        // If deleted Node was the last Node
		if (rear == NULL)
			front = NULL;
		else
			rear->next = NULL;
		delete (temp);
	}
	return;
}

void Dequeue::print_Q () {
	Node* temp = front;
	if (temp == NULL) {
		cout << "DEQUEUE IS EMPTY\n";
		return;
	}
	while (temp != rear->next) {
		cout << temp->data << "  ";
		temp = temp->next;
	}
	cout << endl;
	delete (temp);
	return;
}

int main () {
	cout << "$$$$ Dequeue is Double-Ended Queue. Insertion/deletion can occur at both the ends. $$$$\n\n";
	Dequeue dq;
	dq.insert_front (5);
	dq.insert_front (4);
	dq.insert_front (3);
	dq.insert_front (2);

	cout << "* The Dequeue at present is :   ";
	dq.print_Q ();

	cout << "* Dequeue after insertion at the front :   ";
	dq.insert_front (1);
	dq.print_Q ();


	cout << "* Dequeue after insertion at the end :   ";
	dq.insert_rear (6);
	dq.print_Q ();

	cout << "* Dequeue after deletion from the front :   ";
	dq.delete_front ();
	dq.print_Q ();

	cout << "* Dequeue after deletion from the end :   ";
	dq.delete_rear ();
	dq.print_Q ();
	cout << endl;
	return 0;
}