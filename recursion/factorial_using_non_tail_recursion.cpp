// FACTORIAL USING NON-TAIL RECURSION
// Non-tail Recursion : In non-tail recursion the very last action is not the recursive call. 
// Like here, the very last action is multiplying the num with returned value and not the recursive call.

#include <iostream>
using namespace  std;

// Returns the factorial of num
int factorial_non_tail_recursion (int num) {
	// Best Case
	if (num == 0)
		return 1;
	else
		return factorial num * (num - 1);
}

// Driver Function
int main()
{
	int num, fact;

	cout << "###### FACTORIAL USING RECURSION ######\n";
	cout << "Enter the number whose factorial you want to find:\n";
	cin >> num;
    cout << "The factorial of " << num << " is : " << factorial_non_tail_recursion (num) << endl;
	return 0;
}