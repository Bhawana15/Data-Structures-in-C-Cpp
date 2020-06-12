#include <iostream>
using namespace std;

int power_unsigned_exponent (int num, int exponent) {
	if (exponent == 0)
		return 1;
	else
		return num * power_unsigned_exponent (num, exponent - 1);
}

float power_signed_exponent (int num, int exponent) {
	if (exponent == 0)
		return 1;
	else if (exponent > 0)
		return num * power_signed_exponent (num, exponent - 1);
	else
		return power_signed_exponent (num, exponent + 1)/num;
}

int main(int argc, char const *argv[])
{
	signed int num, signed_exponent;
	unsigned int unsigned_exponent;
	cout << "Enter a number and unsigned exponent and a signed exponent:\n";
	cin >> num >> unsigned_exponent >> signed_exponent;
	cout << "POWER WITH UNSIGNED EXPONENT :\n";
	cout << num << " to the power of " << unsigned_exponent << " is equals to ";
	cout << power_unsigned_exponent (num, unsigned_exponent) << endl;
    cout << "POWER WITH SIGNED EXPONENT :\n";
    if (num < 0){
			cout << "It may result into a complex number as number is negative\n";
			return 0;
	}
	cout << num << " to the power of " << signed_exponent << " is equals to ";
    cout << power_signed_exponent (num, signed_exponent) << endl;
	return 0;
}