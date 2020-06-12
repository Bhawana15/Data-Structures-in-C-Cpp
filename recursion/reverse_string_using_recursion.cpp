/* REVERSE A STRING USING RECURSION
Consider the problem of reversing a string. In particular, we will develop a function f that receives an input string and returns its reverse. 
For example, f ('abcd') ='dcba'.
*/

#include <bits/stdc++.h>
using namespace std;

void reverse_string (string str) {
	if (str.size() == 0) 
		return;
	reverse_string (str.substr(1));
    cout << str[0];
}

int main(int argc, char const *argv[])
{
	cout << "########  REVERSE A STRING USING RECURSION  ########\n";
	string str = "Bhawana Tiwari";
	cout << "Reversed string of \'" << str << "\' is :  \'";
	reverse_string (str);
	cout << "\'" << endl;
	return 0; 
}