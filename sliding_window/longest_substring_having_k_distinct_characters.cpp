#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string longestSubstr (string s, int n, int k) {
	int low = 0, high;
	vector<int> v(26);

	for (int start = 0, end = 0; end < n; end++) {
		v[s[end] - 'a']++;
		if (v.size() > k) {
			if (v[s[start]-'a'] < 2)
				v.pop_front();
			else
				v[s[start++]-'a']--;
		}

		if (high - low < end - start) {
			high = end;
			low = start;
		}
	}
	return s.substr(low, high - low + 1);
}

int main()
{
    string str = "abcbdbdbbdcdabd";
    int k = 2;
 
    int n = str.length();
    cout << longestSubstr(str, n, k);
 
    return 0;
}