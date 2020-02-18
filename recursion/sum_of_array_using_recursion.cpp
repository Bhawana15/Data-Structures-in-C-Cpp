// SUM OF ARRAY USING RECURSION
#include <iostream>
using namespace std;

// RECURSIVE FUNCTION CALL
int sum (int array[], int len) {
	if (len < 0)
		return 0;
	else
		return array[len] + sum (array, len - 1);
}

// Driver Function
int main()
{   
	int array[] = { 6, 37, 9, 3, 75, 17 };
	int len = sizeof(array)/sizeof(array[0]);
    
    cout << "###### INSERTION SORT ######\n";
    cout << "Array is :\n";
    for(int i = 0 ; i < len ; i++)
		cout << array[i] << "\t";
	cout << endl;
	cout << "Sum of array is : " << sum (array, len - 1) << endl;

	return 0;
}