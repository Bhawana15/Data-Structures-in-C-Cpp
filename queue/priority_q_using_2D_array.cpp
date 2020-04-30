// PRIORITY QUEUE USING 2D ARRAY WHERE EACH ROW IS A CIRCULAR QUEUE
// ROW INDEX + 1 - PRIORITY NUMBER, COL INDEX - ELEMENTS WITH SAME PRIORITY NUMBER
// QUEUE[2][0] MEANS ELEMENT WITH PRIORITY 2 AND FIRST INSERTED
// QUEUE[2][1] MEANS ELEMENT WITH PRIORITY 2 AND SECOND INSERTED
// QUEUE[2][2] MEANS ELEMENT WITH PRIORITY 2 AND THIRD INSERTED
// FRONT AND REAR ARE 1D ARRAY WITH SIZE EQUAL TO NUMBER OF ROWS
// EACH ROW OF THE 2D QUEUE IS A CIRCULAR QUEUE

#include <iostream>
using namespace std;

#define MAX_SIZE 10
static int max_priority = 0; // maximum priority entered

class priority_q {
	public :
	int queue[MAX_SIZE][MAX_SIZE]; // actual queue, col means
	int front[MAX_SIZE];
	int rear[MAX_SIZE] ;

	priority_q () : front{'\0'}, rear{'\0'}{
	}

	void insert_element (int data, int priority);
	void delete_element (int data, int priority);
	void print_priority_q ();
};

void priority_q::insert_element (int data, int priority) {
	// When queue is filled 
	if((front[priority-1] == 0 && rear[priority-1] == MAX_SIZE - 1) || front[priority-1] == rear[priority-1] + 1)
		cout << "QUEUE OVERFLOW : Queue with priority number - " << priority << " is FULL !!!\n";
	else {
		// Queue is empty
		if (front[priority - 1] == '\0' && rear[priority - 1] == '\0') {
            front[priority - 1] = 0;
            rear[priority - 1] = 0;
            queue[priority - 1][rear[0]] = data;
		}
		else {
			queue[priority - 1][(++(rear[priority - 1]))] = data;
			cout << "rear  " << rear[priority - 1] << endl;
		}
	} 
	return;
}

void priority_q::delete_element (int data, int priority) {
	// If queue is empty
	if (front[priority - 1] == '\0' && rear[priority - 1] == '\0') 
		cout << "QUEUE UNDERFLOW : queue is empty, cannot delete item !!!\n";
	// If queue has only one element set front and rear back to null
	else if (front[priority - 1] == 0 && rear[priority - 1] == 0){
		front[priority - 1] = '\0';
		rear[priority - 1] = '\0';
    }
    else
	    front[priority - 1]++;
	return;
}

void priority_q::print_priority_q () {
	for(int i = 0 ; i < max_priority ; i++) {
		cout << i << endl;
		// if row with priority 'i' is empty then continue
		if(front[i] == '\0' && rear[i] == '\0') {
			cout << "yo\n";
			continue;
		}
		// If not empty then print
		else{
		    for(int j = front[i]; j < rear[i] ; i++) {
			    cout << "hey\n";
			    cout << queue[i][j] << "    ";
		    }
		}
	}
	cout << endl;	
	return;
}

// Driver function
int main () {
	cout << "###  PRIORITY QUEUE USING 2D ARRAY WHERE EACH ROW IS A CIRCULAR QUEUE  ###\n";
	int choice, data, priority;
    priority_q pq;

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
            max_priority = priority > max_priority ? priority : max_priority;
            pq.insert_element (data, priority);
            break;
        case 2:
            pq.delete_element(data, priority);
            break;
        case 3:
            cout << "PRINTING THE PRIORITY QUEUE !!!\n";
            pq.print_priority_q();
            break;
        case 4:
            cout << "$$$$$$$$  ABORTING PROGRAM  $$$$$$$$";
            break;
        default :
            cout<<"-----------  Wrong choice  ------------\n";
        }
        cout << endl;
    } while(choice != 4);

	return 0;
}