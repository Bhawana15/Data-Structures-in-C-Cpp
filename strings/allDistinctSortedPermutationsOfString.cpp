// PRINT ALL THE DISTINCT SORTED PERMUTATIONS OF A STRING 
// OR
// PRINT ALL THE DISTINCT PERMUTATIONS OF A STRING 
// USING STANDARD TEMPLATE LIBRARY

#include <bits/stdc++.h>
using namespace std;

int ceil_index (string str, char first_char, start) {
	
	return;
}

void sortedPermutations (string str){
	// sort the entire array first
	sort(str.begin(), str.end());
	// when array has ended is_end will be true
	bool is_end = false;
    
    // Loop until array has not ended
	while (!is_end) {
		// Print the permuted string from previous iteration
		// In first iteration it prints the sorted string as first permutation
		static int count_permutation = 1;
		cout << count_permutation << "   " << str << endl;

		// Start permuting again
		int i;
		// Find 'first char' i.e. element at index 'i' 
		for (i = str.length() - 2; i >= 0; i--)
			if (str[i+1] > str[i])
				break;

        // If string ends then out of the loop
		if (i == -1)	
			is_end = true;

		else {
			// Find the 'ceil' of 'first char' in the right pf 'first char'
			// 'Ceil of first char' means smallest character greater than the 'first char'
			ceil_index = find_ceil (str, str[i], i+1);

		}
	}
	return;
}

int main () {
	string str = "ACBC";
	sortedPermutations (str);
	return 0;
}