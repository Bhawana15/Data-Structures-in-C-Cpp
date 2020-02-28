// FACTORIAL OF A NUMBER USING TAIL RECURSION
// Tail Recursion : In tail recursion, the very last action in the function will be the recursive call

#include <iostream>
using namespace std;

int factorial (int num, int fact) {
	if (num == 0)
		return fact;
	return factorial (num - 1, num * fact);
}

// Returns the value factorial() returned to it
int factorial_tail_recursion (int num, int fact) {
	return factorial (num, fact); 
}

// Driver Function
int main()
{
	int num, fact = 1;

	cout << "###### FACTORIAL USING RECURSION ######\n";
	cout << "Enter the number whose factorial you want to find:\n";
	cin >> num;
    cout << "The factorial of " << num << " is : " << factorial_tail_recursion (num, fact) << endl;
	return 0;
}