// FIND FLOOR AND CEIL OF AN ELEMENT IN A SORTED ARRAY USING BINARY SEARCH

#include <bits/stdc++.h>
using namespace std;

int floor (int arr[], int size, int key) {
    int start = 0, end = size - 1, result = INT_MIN;
    if (arr[size - 1] < key)
        result = arr[size - 1];
    else if (arr[0] > key)
        return -1;
    else {
        while (end >= start) {
            int mid = start + (end - start)/2;
            if (arr[mid] == key)
                return arr[mid];
            else if (arr[mid] < key){
                if (arr[mid] < key && arr[mid] > result)
                    result = arr[mid];
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    cout << "#####  FIND FLOOR AND CEIL OF AN ELEMENT IN A SORTED ARRAY USING BINARY SEARCH  ######\n";
    int arr[] = {1, 2, 3, 4, 8, 10, 10, 12, 19};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    cout << "Array is -   ";
    for(int i = 0; i < size; i++)
    	cout << arr[i] << "   ";
    cout << "\nFloor of " << key << " is :  " << floor (arr, size, key) << endl;
    cout << "\nCeil of " << key << " is :  " << ceil (arr, size, key) << endl;
	return 0;
}