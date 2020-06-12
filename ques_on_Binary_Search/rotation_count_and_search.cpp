// FIND THE ROTATION COUNT OR THE NUMBER OF TIMES A SORTED ARRAY IS ROTATED
// ALSO SEARCH AN ELEMENT IN A ROTATED SORTED ARRAY

#include <iostream>
using namespace std;

int binary_search (int arr[], int start, int end, int key) {
    while (end >= start) {
        int mid = start + (end - start)/2;
        if (arr[mid] == key)    
            return mid;
        else {
            if (key < arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    return -1;
}

int rotation_count (int arr[], int size) {
    int start = 0, end = size - 1;
    while (end >= start) {
        int mid = start + (end - start)/2;

        if (arr[mid - 1] > arr[mid] && arr[mid + 1] > arr[mid])
            return mid;
        else if (arr[mid] < arr[size - 1])
            end = mid - 1;
        else 
            start = mid + 1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
	cout << "#######  FIND THE ROTATION COUNT AND SEARCH IN A ROTATED SORTED ARRAY  ######\n";
    int arr[] = {10, 15, 20, 1, 3, 4, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Array is -\n";
    for(int i = 0; i < size; i++)
    	cout << arr[i] << "   ";
    int min_index = rotation_count (arr, size);
    int key = 15;
    cout << "\nNumber of rotation is : " << size - min_index << endl;
    cout << "Searching element " << key << " in the rotated sorted array";

    int key_index;
    if (key >= arr[0])
        key_index =  binary_search (arr, 0, min_index - 1, key);
    else 
        key_index = binary_search (arr, min_index, size - 1, key);

    if (key_index >= 0)
        cout << "\nElement " << key << " is at index :  " << key_index << endl;
    else 
        cout << "\nELEMENT NOT FOUND !!!\n";
	return 0;
} 