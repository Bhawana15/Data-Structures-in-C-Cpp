// GENERATING SUB-ARRAYS USING RECURSION
// Input : [1, 2, 3]
// Output : [1], [1, 2], [2], [1, 2, 3], [2, 3], [3]

#include <iostream>
#include <vector>
using namespace std;

// Recursive function to generate sub-arrays
void generateSubArray (vector<int> v, int start, int end) {
	if (start == v.size())
		return;
	else if (start > end)
		generateSubArray (v, 0, end + 1);
	else {
        cout << "[";
        for (int i = start ; i < end ; i++)
        	cout << v[i] << "," ;
        cout << v[end] << "]" << endl;
        generateSubArray (v, start + 1, end);
	}

	return;
}

// Driver function
int main () {
	vector<int> v = {1, 2, 3};
	cout << "$$$$$$ GENERATING SUB-ARRAYS USING RECURSION $$$$$$" << endl;
	cout << "The array is :\t";
	for(auto i = v.begin() ; i != v.end() ; i++) 
		cout << *i << "\t";
	cout << endl;

	generateSubArray (v, 0, 0);
	return 0;
}