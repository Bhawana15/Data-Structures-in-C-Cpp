// Subset sum using recursion

#include <iostream>
using namespace std;

bool subset_sum(int arr[], int n, int sum) {
	if(n == 0 && sum != 0)
		return false;
	else if(sum == 0)
		return true;

	if(arr[n-1] <= sum)
		return subset_sum(arr, n-1, sum-arr[n-1]) || subset_sum(arr, n-1, sum);
	else
		return subset_sum(arr, n-1, sum);
}

int main() {
	int arr[] = {-5, -2, 4, 8, 7, 3, 10};
	int sum = 11, n = sizeof(arr)/sizeof(arr[0]);
	cout << subset_sum(arr, n, sum);
}