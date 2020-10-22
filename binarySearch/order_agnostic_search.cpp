// ORDER AGNOSTIC SEARCH OR ORDER NOT KNOWN SEARCH
// WE NEED TO SEARCH AN ELEMENT IN A SORTED ARRAY BUT THE ORDER OF SORTING IS UNKNOWN. IT CAN BE ASCENDING OR DESCENDING

#include <iostream>
using namespace std;

int order_agnostic_search (int arr[], int size, int key) {
	int start = 0, end = size - 1, mid;
	while (start <= end) {
		mid = start + (end - start)/2;
        if (arr[mid] == key)    
        	return mid;
		if(arr[0] < arr[1]) {
            if (arr[mid] < key)
            	start = mid + 1;
            else
            	end = mid - 1;
		}
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
	cout << "#######  ORDER AGNOSTIC SEARCH  #######\n";
    int arr[] = {20, 17, 15, 14, 13, 11, 8, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 8;
    cout << "Array is -\n";
    for(int i = 0; i < size; i++)
    	cout << arr[i] << "   ";
    cout << "\tSearching key " << key << endl;
    cout << order_agnostic_search (arr, size, key) << endl;
	return 0;
}