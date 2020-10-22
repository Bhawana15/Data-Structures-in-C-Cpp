// SEARCH AN ELEMENT IN A NEARLY OR ALMOST SORTED ARRAY
// A NEARLY OR ALMOST SORTED ARRAY IS AN ARRAY WHICH IS SORTED BUT AFTER SORTING SOME ELEMENTS HAVE BEEN MOVED TO EITHER OF THE ADJACENT SIDES

#include <iostream>
using namespace std;

int binary_search (int arr[], int size, int key) {
	int start = 0, end = size - 1;
    while (end >= start) {
        int mid = start + (end - start)/2;
        if (arr[mid] == key)    
            return mid;
        else if (mid > 0 && arr[mid - 1] == key)
        	return mid - 1;
        else if (mid < size - 1 && arr[mid + 1] == key)
        	return (mid + 1);
        else {
            if (key < arr[mid])
                end = mid - 2;
            else
                start = mid + 2;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
	cout << "#######  SEARCH AN ELEMENT IN A NEARLY OR ALMOST SORTED ARRAY  ######\n";
    int arr[] = {1, 2, 3, 5, 4, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Array is -\n";
    for(int i = 0; i < size; i++)
    	cout << arr[i] << "   ";
    
    int key = 5;
    cout << "\nSearching element " << key << " in the nearly sorted array";
    int index = binary_search (arr, size, key);
    //if (index >= 0)
        cout << "\nElement " << key << " is at index :  " << index << endl;
	return 0;
} 