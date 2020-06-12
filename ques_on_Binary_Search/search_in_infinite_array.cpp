// FIND THE POSITION OF AN ELEMENT IN AN INFINITE ARRAY

#include <iostream>
using namespace std;

int search (int arr[], int key) {
	int start = 0, end = 1;
    while (end >= start) {
        if (key > arr[end]) {
        	start = end;
        	end *= 2;
        }
        else {
        	int mid = start + (end - start)/2;
        	if (arr[mid] == key)
        		return mid;
        	else if (arr[mid] < key)
        		start = mid + 1;
        	else 
        		end = mid - 1;
        }
    }
    return -1;
}

int main()
{
	cout << "#######  FIND THE POSITION OF AN ELEMENT IN AN INFINITE ARRAY  ######\n";
    int arr[50] = {1, 3, 6, 8, 9, 11, 14, 17, 22, 25, 27, 30, 35, 37, 39, 47, 48, 49, 56, 58, 60, 61, 64, 66, 68, 70, 74, 77, 78, 80, 85, 89, 90};
    int key = 92;
    cout << "\nSearching element " << key << " in the infinte sorted array";
    int index = search (arr, key);
    if (index >= 0)
        cout << "\nElement " << key << " is at index :  " << index << endl;
    else
    	cout << "\nELEMENT NOT FOUND !!!\n";
	return 0;
} 