#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void allSubstr (string s, int n) {
	for (int len = 1, m = 1; len <= n; len++) {
		for (int start = 0; start < n - len + 1; start++) {
			cout << m++ << ") ";
			for (int i = start; i <= start+len-1; i++)
				cout << s[i];
			cout << "\n";
		}
	}
}

int main()
{
    string str = "person";
 
    int n = str.length();
    allSubstr(str, n);
 
    return 0;
}