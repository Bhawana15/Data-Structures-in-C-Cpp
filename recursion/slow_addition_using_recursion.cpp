/*
This problem consists of adding two nonnegative integers a and b, where we cannot use the general arithmetic commands such as addition, 
subtraction, multiplication, or division. Instead, we are only allowed to add or subtract single units from the numbers (a constant amount 
of times). This simple problem will help illustrate how the choice of the size can affect the way we decompose a problem, which leads to 
different recursive algorithms. 
*/

#include <iostream>
using namespace std;

int slow_addition (int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	else
		return slow_addition (a, b - 1) + 1;
}

int quicker_slow_addition (int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	else if (a < b)
		return quicker_slow_addition (a - 1, b) + 1;
	else
		return quicker_slow_addition (a, b - 1) + 1;
}

int alt_quicker_slow_addition (int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	else
		return alt_quicker_slow_addition (a - 1, b - 1) + 2;
}

int main(int argc, char const *argv[])
{
	cout << "###### PROGRAM FOR SLOW ADDITION USING RECURSION ######\n";
	int a, b;
	cout << "Enter two numbers to add them recursively without using normal addtion :\n";
	cin >> a >> b;
	cout << "Slow additon of " << a << " and " << b << " is : " << slow_addition (a, b) << endl;
	cout << "\nNOW LETS MAKE THIS SLOW ADDITION LITTLE QUICKER :\n";
	cout << "Quicker slow additon of " << a << " and " << b << " is : " << quicker_slow_addition (a, b) << endl;
	cout << "\nNOW LETS MAKE AN ALTERNATIVE OF THE QUICKER SLOW ADDITION :\n";
	cout << "Alternate quicker slow additon of " << a << " and " << b << " is : " << alt_quicker_slow_addition (a, b) << endl;
	return 0;
}