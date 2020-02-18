// PRINTING NUMBERS RECURSIVELY
#include <iostream>
using namespace std;

// RECURSIVE FUNCITON
void print (int num) {
	if (num < 0)
		return;
	cout << num << "\t";
	print (num - 1);
	
	return;
}

// Driver Function
int main () {
	int num;
	cout << "$$$$$ Printing in descending order $$$$$" << endl;
	cout << "Enter a number" << endl;
	cin >> num;
	print (num);
	cout << endl;
	return 0;
}