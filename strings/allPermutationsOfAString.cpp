// WAP TO PRINT ALL PERMUTATIONS OF A STRING
// THIS PROGRAM ALSO PRINTS THE DUPLICATE STRINGS IF THERE ARE REPEATING CHARACTERS IN A STRING. EX - APPLE (P IS REPEATING)

#include <iostream>
using namespace std;

void permutation (string str, int beg, int end) {
	// Base case - length of string is 1
	if (end == beg)
		cout << str << endl;

	else {
		for (int i = beg ; i <= end ; i++) {
			swap (str[beg], str[i]);
			// fix letters 
			permutation (str, beg + 1, end);
			// backtrack
			swap (str[beg], str[i]);
		}
	}

	return;
}

int main() {
	string str = "ABC";
	int len = str.size();
	permutation (str, 0, len-1);
	return 0;
}