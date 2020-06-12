// FIRST AND LAST OCCURENCE OF AN ELEMENT IN A SORTED ARRAY IN WHICH ELEMENTS ARE REPEATING USING BINARY SEARCH AND  ALSO COUNT OF THE ELEMENT
// RETURN THE INDEX OF FIRST AND LAST INDEX OF THE ELEMENT
// COUNT = LAST - FIRST + 1

#include <iostream>
using namespace std;

int first_occurence (int arr[], int size, int key) {
    int start = 0, end = size - 1;

    while (end >= start) {
        int mid = start + (end - start)/2;

        if (mid == 0 || arr[mid - 1] < key && arr[mid] == key)
            return mid;
        else if (arr[mid] < key) 
            start = mid + 1;
        else 
            end = mid - 1;
    }
    return -1;
}

int 
last_occurence (int arr[], int size, int key) {
    int start = 0, end = size - 1;

    while (end >= start) {
        int mid = start + (end - start)/2;

        if (mid == size - 1 || arr[mid + 1] > key && arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            end = mid - 1; 
        else
            start = mid + 1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
	cout << "#######  FIRST AND LAST OCCURENCE OF AN ELEMENT IN A SORTED ARRAY IN WHICH ELEMENTS ARE REPEATING USING BINARY SEARCH  ######\n";
    cout << "         ALSO COUNT OF THE ELEMENT\n";
    int arr[] = {2, 2, 3, 4, 4, 5, 8, 8, 8, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 8;
    cout << "Array is -\n";
    for(int i = 0; i < size; i++)
    	cout << arr[i] << "   ";
    int first = first_occurence (arr, size, key);
    int last = last_occurence (arr, size, key);
    cout  << "\nFirst occurence  of " << key << " is at index :  " << first << endl;
    cout  << "Last occurence  of " << key << " is at index :   " << last << endl;
    cout << "So, Count of the element " << key << " is  :  " << last - first + 1 << endl;
	return 0;
} 