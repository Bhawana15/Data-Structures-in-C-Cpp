// QUICK SORT - using RECURSION
#include <iostream>
using namespace std;

// Function to swap a and b
void swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x; 
    return;  
}

int partition (int array[], int lb, int ub) {
    int start = lb, end = ub;
    int pivot = array[lb];

    while (start < end) {
        while (array[start] <= pivot && start < end)
            start++;

        while (array[end] > pivot) 
            end--;

        if (start < end)
            swap (&array[start], &array[end]);
    }

    array[lb] = array[end];
    array[end] = pivot;
    return end;
}

// Function for quick sort
void quick_sort(int array[], int lb, int ub) {
    // Best case - 0 or 1 elements
    if (lb >= ub)
        return;

    int pivot_index = partition (array, lb, ub);
    quick_sort (array, lb, pivot_index - 1);
    quick_sort (array, pivot_index + 1, ub);
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

    cout << "###### QUICK SORT - using RECURSION ######\n";
    cout << "Array is :\n";
    print_array(array, len);

	quick_sort(array, 0, len - 1);

	cout << "Sorted Array is \n";
	print_array(array, len);

	return 0;
}