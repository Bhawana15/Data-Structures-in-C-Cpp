// CONVERT MAX-HEAP TO MIN-HEAP
// OR
// CONVERT AN UNSORTED ARRAY TO MIN-HEAP

#include <iostream>
#include <vector>
using namespace std;

class minHeap {
	int LEFT(int i) {
		return 2*i+1;
	}

	int RIGHT(int i) {
		return 2*i+2;
	}

	void heapify (int A[], int i, int size) {
		int left = LEFT(i);
		int right = RIGHT(i);
		int smallest = i;

		if (left < size && A[smallest] > A[left])
			smallest = left;

		if (right < size && A[smallest] > A[right])
			smallest = right;

		if (smallest != i) {
			swap (A[i], A[smallest]);
			heapify (A, smallest, size);
		}
	}

	public :

	minHeap (int A[], int n) {
		int i = (n - 2)/2;
		while (i >= 0)
			heapify (A, i--, n);
	}

/*
	int pop(int A[], int size) {
		if (size <= )
	}
	*/
};

int main()
{
    // array representing max heap
    int A[] = { 9, 4, 7, 1, -2, 6, 5 };
    int n = sizeof(A) / sizeof(A[0]);
    
    // build a min heap by initializing it by given array
    minHeap pq(A, n);

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}