// SUM OF DIGITS OF A NUMBER USING RECURSION
#include <iostream>
using namespace std;

// Recursive funsiotn to find the sum of digits of num
int sumOfDigits (int num, int sum) {
	if (num == 0)
		return sum;
	sum += num % 10;
	sumOfDigits (num/10, sum);
}

// Driver function
int main () {
	int num, sum = 0;
    cout << "SUM OF DIGITS OF A NUMBER USING RECURSION\n";
    cout << "Enter a number :\t";
    cin >> num;
    cout << "Sum of digits of " << num << " is :  " << sumOfDigits (num, sum) << endl;
	return 0;
}