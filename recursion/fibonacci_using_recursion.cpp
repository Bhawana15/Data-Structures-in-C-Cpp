// FIBONACCI SERIES USING RECURSION
#include <iostream>
using namespace std;

// Prints fibonacci numbers
int fibonacci (int num) {
	if (num == 0 || num == 1)
        return num;
    else
    	return fibonacci (num - 1) + fibonacci (num - 2); // RECUSRION

}

// Driver Function
int main()
{
	int num, series;

	cout << "###### FIBONACCI SERIES USING RECURSION ######\n";
	cout << "Enter the number of terms you want to print :\n";
	cin >> num;

    cout << "Fibonacci series is :" << endl;
    for (int i = 0 ; i < num ; i++)
	    cout << fibonacci (i) << "\t";
	cout << endl;

	return 0;
}