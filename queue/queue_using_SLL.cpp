// QUEUE REPRESENTATION USING A SINGLY LINKED LIST - CREATION, INSERTION AND DELETION

#include <bits/stdc++.h>
using namespace std;

typedef struct Node {
	int data;
	struct Node* next;

    Node (int x) {
    	data = x;
	    next = NULL;
    }
} node;

class Queue {
	public :
    node *front, *rear;
    Queue () {
	    front = NULL;
	    rear = NULL;
    }
	void insert_Q (int x);
	void delete_Q ();
	void print_Q ();
};

void Queue::insert_Q (int x) {
	node *temp = new node(x);
	// If queue is empty
	if (rear == NULL){
		front = temp;
		rear = temp;
	}

	// otherwise
	else {
	    rear->next = temp;
	    rear = temp;
	}
	return;
}

void Queue::delete_Q () {
	// Queue is empty
	if (front == NULL)
		return;

	// Store previous front and 
    // move front one node ahead 
	node* temp = front;
	front = front->next;

	// If front becomes null, then make rear also null
	if (front == NULL)
		rear = NULL;

	delete (temp);
	return;
}

void Queue::print_Q () {
	node* temp  = front;
	while (temp != rear->next) {
		cout << temp->data << "  ";
		temp = temp->next;
	}
	cout << endl;
	return;
}

int main()
{
	cout << "######  QUEUE REPRESENTATION USING A SINGLY LINKED LIST - CREATION, INSERTION AND DELETION  ######\n";
	Queue q;
	q.insert_Q (2);
	q.insert_Q (3);
	q.insert_Q (4);
	q.insert_Q (5);

	cout << "At first the queue is :\n";
	q.print_Q ();

	cout << "Queue after insertion of element 5 :\n";
	q.insert_Q (1);
	q.print_Q ();

	cout << "Queue after deletion of one element :\n";
	q.delete_Q ();
	q.print_Q ();
	return 0;
}