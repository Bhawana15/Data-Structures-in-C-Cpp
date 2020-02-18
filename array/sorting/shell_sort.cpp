// SHELL SORT
#include <iostream>
using namespace std;

// Function to swap a and b
void swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x; 
    return;  
}

// Function for shell sort
void shell_sort(int array[], int len) {
    // To loop until gap becomes 0
    for (int gap = len/2 ; gap > 0 ; gap /= 2) {
        // For incrementing j until swapping occurs so that elements at both the sides are checked
        for (int j = gap ; j < len ; j++) {
            // To check for forward and backward element (from gap element) while keeping j constant 
            for (int i = j - gap ; i >= 0 ; i -= gap ) {
                // If swapping occurs
                if (array[i + gap] < array[i])
                    swap (&array[i + gap], &array[i]); 
                // If swapping doesn't occur
                else
                    break;
            }
        }
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

    cout << "###### SHELL SORT ######\n";
    cout << "Array is :\n";
    print_array(array, len);

	shell_sort(array, len);

	cout << "Sorted Array is \n";
	print_array(array, len);

	return 0;
}