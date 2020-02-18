// MERGE SORT - Used RECURSION
#include <iostream>
using namespace std;

// Function to merge two sub arrays
void merge (int array[], int start, int mid, int end) {
    int left_arr = mid - start + 1; // Size of left sub-array
    int right_arr = end - mid; // Size of right sub-array
    int i, j, k, L[left_arr], R[right_arr];

    // Copying data to Left and Right sub-arrays
    for(i = 0 ; i < left_arr ; i++)
        L[i] = array[start + i];

    for(j = 0 ; j < right_arr ; j++)
        R[j] = array[mid + 1 + j];

    i = 0; // Index of left sub-array
    j = 0; // Index of right sub-array
    k = start; // Index of merged array

    // When elements of left and right arrays are not picked
    while (i < left_arr && j < right_arr) {
        if(L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } 
        else {
            array[k] = R[j];
            j++;
        }  
        k++;
    }   

    // When all elements of left sub-array have been picked
    while (j < right_arr) {
        array[k] = R[j];
        j++;
        k++;
    }

    // When all the elements of right sub-array have been picked
    while (i < left_arr) {
        array[k] = L[i];
        i++;
        k++;
    }

    return;
}

// Function for merge sort
void merge_sort (int array[], int start, int end) {
    //Best case - 1 or 0 elements
    if(start >= end)
        return;

    // Otherwise divide the array recursively until each sub-array has one element
    int mid = (start + end) / 2; 
    merge_sort (array, start, mid);
    merge_sort (array, mid + 1, end);

    // Merge the two sub-arrays
    merge (array, start, mid, end);

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

    cout << "###### MERGE SORT - Used RECURSION ######\n";
    cout << "Unsorted Array is :\n";
    print_array (array, len);

	merge_sort(array, 0, len-1);

	cout << "Sorted Array is \n";
	print_array (array, len);

	return 0;
}