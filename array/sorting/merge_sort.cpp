// MERGE SORT
#include <iostream>
using namespace std;

// Function to merge two sub arrays
void merge (int array[], int low, int mid, int high) {
        

    return;
}

// Function for merge sort
void merge_sort (int array[], int low, int high) {
    int mid = (low + high ) / 2;

    merge_sort (array, low, mid);
    merge_sort (array, mid + 1, high);
    merge (array, low, mid, high);

    return;		
}

// Function to print the array
void print_array (int array[], int len) {
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

    cout << "###### MERGE SORT ######\n";
    cout << "Unsorted Array is :\n";
    print_array (array, len);

	merge_sort(array, 0, len-1);

	cout << "Sorted Array is \n";
	print_array (array, len);

	return 0;
}