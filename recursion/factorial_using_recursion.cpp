// FACTORIAL USING RECURSION
#include <iostream>
using namespace  std;

// Prints fibonacci numbers
int factorial (int num) {
	// Best Case
	if (num == 0)
		return 1;
	else
		return factorial (num - 1) * num;
}

// Driver Function
int main()
{
	int num, fact;

	cout << "###### FACTORIAL USING RECURSION ######\n";
	cout << "Enter the number whose factorial you want to find:\n";
	cin >> num;
    cout << "The factorial of " << num << " is : " << factorial (num) << endl;
	return 0;
}