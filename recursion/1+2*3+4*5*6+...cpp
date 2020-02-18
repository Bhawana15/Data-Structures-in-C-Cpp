// SUM OF THE SERIES 1 + (2 * 3) + (4 * 5 * 6) + (7 * 8 * 9 * 10) + ... USING RECURSION
#include <iostream>
using namespace std;

// Recursive function to find the of num_of_terms terms of the given series
int sumOfSeries (int num_of_terms, int x, int y) {
	int i, sum = 1;
	if (y == num_of_terms + 1)
		return 0;
	for (i = x ; i < x + y; i++) 
		sum *= i;
	return sum + sumOfSeries (num_of_terms, i, y + 1);
}

// Driver function
int main () {
	int num_of_terms;
	cout << "###### SUM OF THE SERIES 1 + (2 * 3) + (4 * 5 * 6) + (7 * 8 * 9 * 10) + ... USING RECURSION ######\n";
	cout << "Enter the number of terms in the series : ";
	cin >> num_of_terms;
	cout << "Sum is :  " << sumOfSeries (num_of_terms, 1, 1) << endl;
	return 0;
}