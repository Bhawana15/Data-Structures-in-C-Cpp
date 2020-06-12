/* IS A STRING A PALINDROME - USING RECURSION
   A PALINDROME IS A STRING WHICH IS THE SAME WHEN READ FROM LEFT OR RIGHT SIDE
   EXAMPLE - LEVEL, RADAD, MADAM, REVIVER, CIVIC, KAYAK, REFER, DEIFIED, RACECAR, REDEVIDER etc
*/

#include <bits/stdc++.h>
using namespace std;

bool is_palindrome (string str) {
	int len = str.size();
	if (len < 2)
		return true;
	return (str[0] == str[len - 1]) && is_palindrome (str.substr(1, len - 2));
}

int main(int argc, char const *argv[])
{
	cout << "########  IS A STRING A PALINDROME - USING RECURSION  ########\n";
	string str = "redivider";
	cout << "\'" << str << "\' is a Palindrome :  ";
	is_palindrome (str) == 1 ? cout << "true\n" : cout << "false\n";
	return 0; 
}