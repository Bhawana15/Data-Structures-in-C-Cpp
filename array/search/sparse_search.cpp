/**** PROGRAM FOR SPARSE SEARCH (FOR STRINGS) IN C++ ****/
/* If there were no empty strings then we could’ve simply performed binary search. Here, we will use binary search with a little modification. 
 * If our mid is empty we just have to move mid to closest Non-Empty string. */

#include <iostream>
#include <cstring>
using namespace std;

/* Binary Search in an array with blanks */
int binary_search(string str, int low, int high, string substr)
{
	/* Substring not found */
	if(high < low)
		return -1;

	int mid = (low + high) / 2;

	/* Modified Part - If blank is at the middle of the string passed to the function */
	if(str[mid] == "")
	{
		int left = mid - 1;
		int right = mid + 1;

		/* Search for both side for a non-empty string */
		while(1)
		{
			if(left < low && right > high)
				return -1;
			if(left >= low && str[left] != ""){
				mid = left;
				break;
			}
			else if(right <= high && str[right] != ""){
				mid = right;
				break;
			}
			left--;
			right--;
		}
	}

	/* Normal Binary Search */
	if(str[mid] == substr)
		return mid;
	else if(str[mid] > substr)
		return binary_search(str, low, mid - 1, substr);
	else
		return binary_search(str, mid + 1, high, substr);
}

int sparse_search(string str, string substr, int length)
{
	return binary_search(str, 0, length-1, substr);
}

int main(){
	ios_base::sync_with_stdio(false);

	string str =  "for", "geeks", "", "", "", "", "ide", "practice", "", "", "", "quiz" ;
	string substr = "geeks";
	int length = sizeof(str) / sizeof(str[0]);
	int index = sparse_search(str, substr, length);
	(index == -1) ? cout<<"SUB-STRING NOT FOUND" << endl : cout << "Sub-String "<< substr << " found at index " << index << endl;
	return 0;
}
