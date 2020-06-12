/* Given a nonnegative integer n, and a digit 0 ≤ d ≤ 9 (which is also an integer), in this problem the goal consists of determining 
whether d is present in n. The recursive method will therefore be a Boolean function with parameters n and d. 
Additionally, we will assume that n does not contain any leading zeros (for example, 358 cannot be written as 0358).
However, we will consider that the number zero contains the digit 0. */

#include <iostream>
using namespace std;

bool boolean_func (int num, int find) {
    if (num < 10)
    	return (num == find);
    return (num % 10 == find) or boolean_func (num/10, find);

}

int main(int argc, char const *argv[])
{
	int num = 7836;
	int find = 0;
	cout << "Checking if " << find << " is present in " << num << " :  ";
	boolean_func(num, find) == 1 ? cout << "PRESENT\n" : cout << "NOT PRESENT\n";
	return 0;
}