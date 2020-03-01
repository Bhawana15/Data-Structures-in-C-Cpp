// QUEUE REPRESENTATION USING AN ARRAY - CREATION, INSERTION AND DELETION

#include <iostream>
using namespace std;
#define SIZE 10

int rear = -1;
int front = -1;
int queue[SIZE];

void printQ () {
	for (int i = front ; i <= rear ; i++) 
		cout << queue[i] << "  ";
	cout<< endl << endl;;
	return;
}

void insertQ (int data) {
	// When queue is filled
	if (front == 0 && rear == SIZE)
		cout << "QUEUE OVERFLOW\n";

	// When a circular queue is filled
	if (front == rear + 1)
	    cout << "QUEUE OVERFLOW\n";		

	// When queue is not filled
	else {
		if (front == -1)
			front = 0;
		rear++;
		queue[rear] = data;
	}
	return;
}

void deleteQ () {
	if (front == -1 || front > rear)
		cout << "QUEUE UNDERFLOW\n";
	front++;
	return;
}

int main () {
	cout <<"####  QUEUE REPRESENTATION USING AN ARRAY - CREATION, INSERTION AND DELETION  ####\n";
	insertQ (6);
	insertQ (7);
	insertQ (8);
	insertQ (9);
	cout << "At first the queue is :\n";
	printQ ();

	cout << "Queue after insertion of element 5 :\n";
	insertQ (5);
	printQ ();

	cout << "Queue after deletion of one element :\n";
	deleteQ ();
	printQ ();
	return 0;
}