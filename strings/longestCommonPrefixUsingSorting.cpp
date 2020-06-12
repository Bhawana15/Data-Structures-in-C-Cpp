// LONGEST COMMON PREFIX USING SORTING - LEETCODE PROBLEM
// EX - {"APPLE", "APE", "APRIL"},   ANS = "AP"
// THE IDEA IS TO SORT THE ARRAY OF STRINGS & FIND THE COMMON PREFIX OF THE FIRST AND LAST STRING OF THE SORTED ARRAY

#include <iostream>
using namespace std;

string longestCommonPrefix (string arr[], int len) {
	// If size is 0, return empty string
	if (len == 0)
		return "";
	// Base Case
	if (len == 1)
		return arr[0];

    // Sort the array
	sort(arr, arr + len);
	// Initislize first and last strings in the sorted array
	string first = arr[0], last = arr[len - 1];
	// Find minimum of the size of first and last strings
    int min = min (first.size(), last.size());

    int i = 0;
    while (i <  && first[i] == last[i])
    	i++;
    string commonPrefix = first.substr(0, i);
	return commonPrefix;
}

int main()
{
	cout << "###### LONGEST COMMON PREFIX USING SORTING - LEETCODE PROBLEM  ######\n";
	string arr[] = {"flower", "flow", "flight"};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "The array is -    ";
    for (int i = 0; i < len; i ++)
    	cout << arr[i] << "     ";
    cout << "\n\nThe Longest Common Prefix is -   " << longestCommonPrefix (arr, len) << endl;
  	return 0;
}