#include <iostream>
using namespace std;

// Function to swap a and b
void swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x; 
    return;  
}

// Function for bubble sort
void bubble_sort(int array[], int len) {
    for(int i = 0 ; i < len - 1 ; i++)
    	for(int j = 0 ; j < len - i - 1 ; j++)
    		if(array[j] > array[j+1])
    			swap(&array[j], &array[j+1]);
    return;		
}

// Function to print the array
void print_array(int array[], int len) {
	for(int i = 0 ; i < len - 1 ; i++)
		cout << array[i] << "\t";
	cout << endl;
	return;
}

// Driver Function
int main()
{
	int array[] = { 6, 37, 9, 3, 75, 17 };
	int len = sizeof(array)/sizeof(array[0]);

    cout << "###### BUBBLE SORT ######\n";
    cout << "Array is :\n";
    print_array(array, len);

	bubble_sort(array, len);

	cout << "Sorted Array is \n";
	print_array(array, len);

	return 0;
}