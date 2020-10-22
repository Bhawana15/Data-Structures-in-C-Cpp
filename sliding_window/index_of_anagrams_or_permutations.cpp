// Return index of all anagrams or permutations of a string in another string
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void findAllAnagrams(string X, string Y) {
	int xlen = X.length(), ylen = Y.length();

	if (xlen < ylen)
		return;

	unordered_multiset<char> window, set;

	for (int i = 0 ; i < ylen; i++) 
		set.insert(Y[i]);

	for (int i = 0; i < xlen; i++) {
		if (i < ylen)
			window.insert(X[i]);
		else {
			if (window == set) 
				cout << i-ylen << "  ";

			auto itr = window.find(X[i-ylen]);
			if (itr != window.end())
				window.erase(itr);

			window.insert(X[i]);
		}
	}

	if (window == set)
		cout << xlen-ylen << "  ";
}

int main()
{
    string X = "XYYZXZYZXXYZ";
    string Y = "XYZ";
 
    findAllAnagrams(X, Y);
 
    return 0;
}