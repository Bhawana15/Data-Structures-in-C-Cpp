//Given an array nums and a value val, remove all instances of that value in-place and return the new length.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
       return nums.size();
        
    }
};

int main(int argc, char const *argv[])
{
	Solution s;
    vector<int> v { 2, 3, 3, 2, 4 };
    cout << "SIZE before deleting the element 3 : " << v.size() << endl;
	cout << "SIZE after deleting the element 3 : " << s.removeElement(v, 3) << endl;;	
	return 0;
}