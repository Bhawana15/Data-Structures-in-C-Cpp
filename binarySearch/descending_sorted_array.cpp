// We need to search an element in an array that is sorted in descending order

#include <iostream>
using namespace std;

int descending_order_search (int arr[], int size, int key) {
	int start = 0, end = size - 1, mid;
	while (start <= end) {
		mid = start + (end - start)/2;
        if (arr[mid] == key)    
        	return mid;
		else {
            if (arr[mid] < key)
            	end = mid - 1;
            else
            	start = mid + 1;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
    cout << "######  SEARCH IN DESCENDING ORDER SORTED ARRAY  ######\n";
    int arr[] = {20, 17, 15, 14, 13, 11, 8, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 13;
    cout << "Array is -\n";
    for(int i = 0; i < size; i++)
    	cout << arr[i] << "   ";
    cout << "\tSearching key " << key << endl;
    cout << descending_order_search (arr, size, key) << endl;
    
	return 0;
}