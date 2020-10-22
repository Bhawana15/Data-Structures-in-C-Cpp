#include <iostream>
using namespace std;

int minElement(vector<int> v) {
	int start=0, end = v.size()-1;
	while (start <=end) {
		int mid = start+(end-start)/2;
		if(mid-1 > 0 && v[mid] < v[mid-1]){
			cout << key << " found\n";
			return 0;
		}
		else if(arr[mid])
	}
}

int main(int argc, char const *argv[])
{
	std::vector<int> v{11, 12, 15, 18, 2, 6, 7, 8};
	int start=0, end = v.size()-1, key = 15;

	while (start <=end) {
		int minELe = minElement(v);
		if(v[mid] == key){
			cout << key << " found\n";
			return 0;
		}

		else if()
	}
	return 0;
}