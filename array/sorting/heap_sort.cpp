// HEAP SORT - ASCENDING ORDER (IN-PLACE ALGORITHM) RECURSION ALSO USED
#include <iostream>
using namespace std;

// Function to swap a and b
void swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x; 
    return;  
}

// Function to perform Heapification (converting to max heap, here) using RECURSION
void heapify(int array[], int len, int i) {
    int largest = i;
    int left = 2 * i + 1;  // Left Child
    int right = 2 * i + 2; // Right Child
    
    if (left < len && array[left] > array[largest])
        largest = left;

    if (right < len && array[right] > array[largest])
        largest = right;

    if (largest != i) {
        swap(array[largest], array[i]);
        heapify(array, len, largest); // RECURSION
    }

    return;
}

// Function for heap sort
void heap_sort(int array[], int len) {
    // To heapify each parent element
    for(int i = len/2 - 1 ; i >= 0 ; i--) 
        heapify(array, len, i);

    // Performing sort
    for(int i = len - 1 ; i >= 0 ; i--) {
        swap(array[0], array[i]);
        heapify(array, i, 0);
    }

    return;		
}

// Function to print the array
void print_array(int array[], int len) {
	for(int i = 0 ; i < len ; i++)
		cout << array[i] << "\t";
	cout << endl;
	return;
}

// Driver Function
int main()
{
	int array[] = { 6, 37, 9, 3, 75, 17 };
	int len = sizeof(array)/sizeof(array[0]);

    cout << "###### HEAP SORT - ASCENDING ORDER (IN-PLACE ALGORITHM) \'RECURSION ALSO USED\' ######\n";
    cout << "Unsorted Array is :\n";
    print_array(array, len);

	heap_sort(array, len);

	cout << "Sorted Array is \n";
	print_array(array, len);

	return 0;
}