// SUM OF POWER SERIES USING RECURSION : 1^1 + 2^2 + 3^3 + ......
#include <iostream>
#include <cmath>
using namespace std;

// Recursive function to find the sum of power seires
int sum_power_series (int num) {
	// For 1^1
	if (num == 1) 
		return 1;
	return pow(num, num) + sum_power_series (num - 1);
}

// Druver Function
int main () {
	int num;
	cout << "SUM OF POWER SERIES USING RECURSION : 1^1 + 2^2 + 3^3 + ......" << endl;
	cout << "Enter a number : \t";
	cin >> num;
	cout << "Sum of the power series till "<< num << " is : " << sum_power_series (num) << endl;
	return 0;
}