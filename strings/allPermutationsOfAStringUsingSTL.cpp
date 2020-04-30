// We use next_permutation() function of STL
// PRINT ALL THE DISTINCT SORTED PERMUTATIONS OF A STRING 
// See Q4 in your notes

#include <bits/stdc++.h>
using namespace std;

void permute (string str) {
	// Sorting the string lexicographically
	sort (str.begin(), str.end());

	// Print next permutation until next_permutation() returns false
	do {
		cout << str << endl;
	} while (next_permutation (str.begin(), str.end()));
	return;
}

int main() {
	string str = "AAB";
	permute (str);
	return 0;
}