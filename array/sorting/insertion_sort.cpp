#include <iostream>
using namespace std;

// Function for insertion sort
void insertion_sort(int array[], int len) {
    int i, j, temp;

    for(i = 1 ; i < len ; i++) {
        temp = array[i];
        for(j = i - 1 ; j >= 0 && temp < array[j] ; j--) 
                array[j+1] = array[j];    
        array[j+1] = temp;
    }

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
    
    cout << "###### INSERTION SORT ######\n";
    cout << "Array is :\n";
    print_array(array, len);

	insertion_sort(array, len);

	cout << "Sorted Array is \n";
	print_array(array, len);

	return 0;
}