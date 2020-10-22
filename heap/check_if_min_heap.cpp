// CHECK IF GIVEN ARRAY REPRESENTS MIN-HEAP OR NOT

#include <iostream>

using namespace std;

int checkMinHeap (int arr[], int i, int n) {
	if (2*i + 2 > n)
		return true;

	bool left = arr[i] <= arr[2*i+1] && checkMinHeap (arr, 2*i+1, n);
	bool right = arr[i] <= arr[2*i+2] && checkMinHeap (arr, 2*i+2, n);

	return left && right;
}

int main()
{
    int A[] = { 2, 3, 5, 8, 10 };
    int n = sizeof(A) / sizeof(int);

    // start with index 0 (root of the heap)
    int index = 0;

    if (checkMinHeap(A, index, n))
        cout << "Given array is a min heap\n";
    else
        cout << "Given array is not a min heap\n";
 
    return 0;
}