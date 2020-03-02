// PRIORITY QUEUE USING SINGLY LINKED LIST IN C++

#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	int priority; // PRIORITY
	node* next;
};

class Priority_Q {
private:
	node* head;
public:
	Priority_Q () {
		head = NULL;
	}

	void insert_node (int data, int priority);
	void delete_node ();
	void print_priority_q ();
};

// Function to insert node to the priority queue
void Priority_Q::insert_node (int data, int priority) {
	node* newNode = new node;
	newNode->data = data;
	newNode->priority = priority;
	newNode->next = NULL;
	node *tmp;

	// When queue is empty or priority of first node is more than the node to be inserted
	// then insert the node at the first
	if (head == NULL)
		head = newNode;

	else if (priority < head->priority) {
		newNode->next = head;
		head = newNode;
	}

	else {
		tmp = head;
		while (tmp->next != NULL && tmp->next->priority <= priority) {
			tmp = tmp->next;
		}
		newNode->next = tmp->next;
		tmp->next = newNode;
		// delete (tmp);
	}
	return;
}

// Function to delete a node from the priority queue
void Priority_Q::delete_node () {
	// If queue is empty
	if (head == NULL)
		cout << "!!! UNDERFLOW !!!\n";

	// Otherwise, delete last node
	else {
		node* temp = head;
		cout << "Deleting node with data = " << head->data << endl;
		head = head->next;
		delete (temp);
	}
	return;
}

// Function to print the priority queue
void Priority_Q::print_priority_q () {
	node *temp = head;
	if (head == NULL)
		cout << "Queue is EMPTY !!!! Insert a node and then try printing it!!\n";
	else {
		cout << "Priority Queue is :  \nPriority        Item\n";
	    while (temp != NULL) {
		    cout << "   " << temp->priority << "\t\t" << temp->data << endl;
		    temp = temp->next;
	    }
	    delete temp;
    }
	return;
}

// Driver function
int main()
{	
	cout << "$$$$$  PRIORITY QUEUE USING SINGLY LINKED LIST IN C++  $$$$$\n\n";
	Priority_Q pq;
    int choice, data, priority; 

    do
    {
        cout<<"1.Insert\n";
        cout<<"2.Delete\n";
        cout<<"3.Display\n";
        cout<<"4.Quit\n";
        cout<<"> Enter your choice : "; 
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter DATA  : ";
            cin>>data;
            cout<<"Enter PRIORITY : ";
            cin>>priority;
            pq.insert_node (data, priority);
            break;
        case 2:
            pq.delete_node();
            break;
        case 3:
            cout << "PRINTING THE PRIORITY QUEUE !!!\n";
            pq.print_priority_q();
            break;
        case 4:
            cout << "$$$$$$$$  ABORT PROGRAM  $$$$$$$$";
            break;
        default :
            cout<<"-----------  Wrong choice  ------------\n";
        }
        cout << endl;
    } while(choice != 4);

	return 0;
}