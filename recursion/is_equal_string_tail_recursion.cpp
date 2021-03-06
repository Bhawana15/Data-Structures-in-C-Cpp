// Is equal string using tail recursion
/* The following problem consists of determining whether two strings are equal
A Boolean function that solves the problem will therefore have two string input parameters. 
If their lengths are different the algorithm can return False immediately in a base case. Thus, the challenge lies in solving
the problem when they have the same length, which would constitute its size.
*/

#include <iostream>
using namespace std;

bool is_equal_string (string s1, int size1, string s2, int size2) {
    if (size1 != size2)
		return false;
	else if (s1 == "")
		return true;
	else if (s1[size1] != s2[size2])
		return false;
	else
		return is_equal_string (s1, size1 - 1, s2, size2 - 1);	
}

int main(int argc, char const *argv[])
{
	char s1[] = "Yeah bro";
	char s2[] = "Yeah bro";
	int size1 = sizeof(s1) / sizeof(s1[0]);
	int size2 = sizeof(s2) / sizeof(s2[0]);
	cout << "String s1 = " << s1 << "\nString s2 = " << s2 << "\nBoth are equal : ";
	is_equal_string (s1, size1 - 2, s2, size2 - 2) == 1 ? cout << "True\n" : cout << "False\n";
	return 0;
}