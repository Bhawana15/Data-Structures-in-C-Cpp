// SELECTION SORT USING RECURSION 

#include <iostream>
using namespace std;

/*void swap (int arr[], int& a, int& b) {
	int x = arr[a];
	arr[a] = arr[b];
	arr[b] = arr[x];
}*/

int recursive_min_index (int arr[], int min_index, int start, int len) {
	if (i == j)
		return i;

}

void recursive_selection_sort (int arr[], int len, int min_index = 0) {
	if (len < 2)
		return;
	int start = 0;
	int k = recursive_min_index (arr, min_index, len - 1);
    if (arr[k] != arr[min_index])
    	swap (k, min_index);
    recursive_selection_sort (int arr[], len, min_index + 1);
}

int main(int argc, char const *argv[])
{
	cout << "######  SELECTION SORT USING RECURSION  ######\n";
	int arr[] = {3, 1, 7, 5, 9, 4};
	int len = sizeof(arr)/sizeof (arr[0]);
	cout << "Array is :  ";
	for (int i = 0; i < len; i++)
		cout << arr[i] << "   ";
	cout << "Array after sorting :  ";
	recursive_selection_sort (arr, n, 0);
	for (int i = 0; i < len; i++)
		cout << arr[i] << "   ";
	return 0;
} 