// FIND THE FIRST OCCURENCE OF 1 IN A BINARY SORTED INFINITE ARRAY

#include <bits/stdc++.h>
using namespace std;

int first_one (int arr[]) {
	int start = 0, end = 1, result = INT_MAX; 
    if (arr[0] == 1)
        return 0;
    while (end >= start) {
        int mid = start + (end - start)/2;
        if (arr[mid] == 1) {
            if (mid < result)
                result = mid;
            end = mid - 1;
        }
        else {
            start = end;
            end *= 2;
        }
        cout << endl << arr[mid] << endl;
    }
    return -1; 
}

int main()
{
	cout << "#######  FIND THE FIRST OCCURENCE OF 1 IN A BINARY SORTED INFINITE ARRAY  ######\n";
    int arr[50] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int index = first_one (arr);
    if (index >= 0)
        cout << "First occurence of 1 is at index :  " << index << endl;
    else
    	cout << "1 IS NOT PRESENT IN THE BINARY SORTED INFINITE ARRAY !!!\n";
	return 0;
} 