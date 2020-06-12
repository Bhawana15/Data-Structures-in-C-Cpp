// CHECK WHETHER THE ARRAY IS IN SORTED ORDER USING RECURSION

#include <iostream>
using namespace std;

bool is_sorted (int arr[], int len) {
    if (len < 0)
    	return true;
    else {
        return (arr[len] > arr[len - 1]) ? is_sorted (arr, len - 1) : false;
    }
}

int main(int argc, char const *argv[])
{
	cout << "######  CHECK WHETHER THE ARRAY IS IN SORTED ORDER USING RECURSION  ######\n";
    int arr[] = {1, 2, 3, 4, 5, 7, 5}; 
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "The array is  :  {  ";
    for (int i = 0; i < len; i++)
    	cout << arr[i] << "   ";
    int res = is_sorted (arr, len - 1);
    cout << "}\nThe array is in sorted order  :  ";
    (res == 0) ? cout << "False\n" : cout << "True\n";

	return 0;
}