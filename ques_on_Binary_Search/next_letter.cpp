// FIND NEXT LETTER IN A SORTED STRING USING BINARY SEARCH

#include <bits/stdc++.h>
using namespace std;

char next_letter (char arr[], int size, char key) {
    int start = 0, end = size - 1, flag = 0;
    char result = '\0';
    if (arr[size - 1] < key)
        return -1;
    else if (arr[0] > key)
        result = arr[0];
    else {
        while (end >= start) {
            int mid = start + (end - start)/2;
            if (arr[mid] > key){
                if (arr[mid] < result || flag == 0) {
                    result = arr[mid];
                    flag = 1;
                }
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
    }
    return result;
}

int main()
{
    cout << "#####  FIND NEXT LETTER IN A SORTED STRING USING BINARY SEARCH  ######\n";
    char arr[] = {'b', 'c', 'f', 'g', 's', 'u'};
    int size = sizeof(arr)/sizeof(arr[0]);
    char key = 'p';
    cout << "Array is -   ";
    for(int i = 0; i < size; i++)
    	cout << arr[i] << "   ";
    cout << "\nNext letter of " << key << " is :  " << next_letter (arr, size, key) << endl;
	return 0;
}