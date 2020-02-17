#include <iostream>
using namespace std;

// Function to swap a and b
void swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x; 
    return;  
}

// Function for insertion sort
void selection_sort(int array[], int len) {   
    int min_index, i, j; // We cant use minimum number here, min_index should be used

    for(i = 0 ; i < len - 1 ; i++) {

        min_index = i;
        for(j = i + 1 ; j < len ; j++)
            if(array[j] < array[min_index])
               min_index = j;

        swap(&array[min_index], &array[i]); // Bcoz if minimum number is used then swapping wont occur in the array
    }                                      // But swapping will occur between minimum number and array[i]

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

    cout << "###### SELECTION SORT ######\n";
    cout << "Array is :\n";
    print_array(array, len);

	selection_sort(array, len);

	cout << "Sorted Array is \n";
	print_array(array, len);

	return 0;
}