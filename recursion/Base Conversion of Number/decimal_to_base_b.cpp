/*  CONVERSION OF BASE OF A NUMBER OF BASE 10 TO BASE 'base'
The goal consists of developing a recursive function that, given a particular nonnegative integer n (in base 10), returns a new 
integer that contains the binary representation of n, which is the sequenceof base-b digits (i.e., bits) associated with the value of n. 
The output will also be a number in base 10, but its digits will only be either zero or one.

All we require is a clear definition of the size of the problem that will enable us to define base cases and decompose the problem. 
Thus, the base case occurs when n < b, where the output is simply n.
*/

#include <iostream>
using namespace std;

long base_conversion (int num, int base) {
	if (num < base)
		return num;
	return 10 * base_conversion (num/base, base) + num % base;
}

int main(int argc, char const *argv[])
{
	cout << "########  CONVERSION OF BASE OF A NUMBER OF BASE 10 TO BASE 'base'  ########\n";
	int num, base;
	cout << "Enter a number and base to which it will be converted -\n";
	cin >> num >> base;
	cout << num << " in base-" << base <<" will be :  " << base_conversion (num, base) << endl;
	return 0; 
}