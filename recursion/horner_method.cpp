/* HORNER'S METHOD FOR EVALUATING POLYNOMIALS USING RECURSION
In this problem the goal consists of evaluating a polynomial of degree n:
P (x) = c n x n + c n−1 x n−1 + ⋯ + c 1 x + c 0 , at some real value x. 
The sum contains powers of x that are multiplied by the coefficients c i . A naive algorithm that computes each power independently 
would require on the order of n 2 multiplications. Instead, Horner’s method only needs to perform n products. Its clever idea is
based on expressing the polynomial as:
P (x) = c 0 + x(c 1 + x(c 2 + ⋯ + x(c n−1 + c n x))).

The size of the problem is clearly the degree n. Thus, the base case occurs when n = 0, where the result is obviously c 0 . 
In practice, c will be a list (or a similar data structure such as an array) of n+1 elements that represents the polynomial.
Therefore, the base case is reached when the length of c is one.
*/

#include <iostream>
using namespace std;

int horner_polynomial (int x, int constants[], int len) {
	if (len == 1) 
		return constants[0];
	return constants[len - 1] + x * horner_polynomial (x, constants, len - 1);
}

int main(int argc, char const *argv[])
{
	cout << "######  HORNER'S METHOD FOR EVALUATING POLYNOMIALS USING RECURSION  ######\n";
	int constants[] = {3, 4, 1, 2};
	int len = sizeof(constants) / sizeof(constants[0]);
	int x = 2;
	cout << "The value of the polynomial  3x^3 + 4x^2 + x + 2,  when x = 2 is :  " << horner_polynomial (x, constants, len) << endl;
	return 0;
}