// SUM OF EVEN NUMBERS OF AN ARRAY USING RECURSION
#include <iostream>
using namespace std;

// Recursive function to find the sum of even numbers in the array
int sumOfEven (int array[], int len, int sum) {
	// No elements left in the array
    if (len < 0) 
    	return sum;
    
    if ((array[len]) % 2 == 0)
  	    sum += (array[len]);
    sumOfEven (array, len - 1, sum);
}

// Driver Function
int main()
{
	int array[] = {6, 37, 9, 4, 99, 104, 75, 96};
	int len = sizeof (array) / sizeof (array[0]);
	int sum = 0;
	cout << "$$$$$$ SUM OF EVEN NUMBERS OF AN ARRAY USING RECURSION $$$$$$\n";
	cout << "Array is :\t";
	for(int i = 0 ; i < len ; i++)
		cout << array[i] << "\t";
	cout << endl;
	cout << "Sum of even numbers of the array is :" << sumOfEven (array, len - 1, sum) << endl;
	return 0;
}