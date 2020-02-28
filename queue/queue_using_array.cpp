// QUEUE REPRESENTATION USING AN ARRAY - CREATION, INSERTION AND DELETION

#include <iostream>
using namespace std;
#define SIZE 20

class Queue {
	private :
	int data[SIZE];
	int length;
	public :
	Queue () : data{ 1, 2, 3, 4, 5, 6, 7, 8 } {
		length = 8;
	}

	void printQueue();
	void insertNode(int element);
	void deleteNode();
};

void Queue::printQueue () {
		for (int i = 0 ; i < length ; i++)
			cout << data[i] << "  ";
		cout << endl;
		return;
}

void Queue::insertNode (int element) {
	data[length] = element;
	length++;
	return;
}

void Queue::deleteNode () {
	for (int i = 0, j = 1 ; j < length ; i++, j++) {
		data[i] = data[j];
	}
	data[length] = '\0';
	length--;
	return;
}

int main()
{
	cout << "####  QUEUE REPRESENTATION USING AN ARRAY - CREATION, INSERTION AND DELETION  ####\n";
	Queue q;
	int element;

	// REPRESENTATION 
	cout << "The Queue is :  ";
	q.printQueue ();

    // INSERTION
    cout << "Enter an element to insert it in the queue :  ";
    cin >> element;
    q.insertNode (element);
    cout << "Array after Insertion :  ";
    q.printQueue ();

    // DELETION
	q.deleteNode();
	cout << "Array after Deletion :  ";
	q.printQueue();

	return 0;
}