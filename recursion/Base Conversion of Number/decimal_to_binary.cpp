/*  CONVERSION OF BASE OF A NUMBER OF BASE 10 TO BASE 2
The goal consists of developing a recursive function that, given a particular nonnegative integer n (in base 10), returns a new 
integer that contains the binary representation of n, which is the sequenceof base-2 digits (i.e., bits) associated with the value of n. 
The output will also be a number in base 10, but its digits will only be either zero or one.

Since we need to create the sequence of “bits,” the size of the problem is the number of bits in the binary representation of n.
Mathematically, this quantity is ⌊log 2 n⌋ + 1 (for n > 0). We do not need the formula in order to design the recursive algorithm. 

All we require is a clear definition of the size of the problem that will enable us to define base cases and decompose the problem. 
In particular, the smallest instance of the problem correspond to numbers that contain a single bit, which are 0 and 1. 
Thus, the base case occurs when n < 2, where the output is simply n.
*/

#include <iostream>
using namespace std;

long base_conversion (int num) {
	if (num < 2)
		return num;
	return 10 * base_conversion (num/2) + num % 2;
}

int main(int argc, char const *argv[])
{
	cout << "########  CONVERSION OF BASE OF A NUMBER OF BASE 10 TO BASE 2  ########\n";
	int num = 16;
	cout << num << " in base-2 will be :  " << base_conversion (num) << endl;
	return 0; 
}