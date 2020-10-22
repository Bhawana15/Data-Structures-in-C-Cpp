// Subset sum using recursion

#include <bits/stdc++.h>
using namespace std;

int t[10][10];
bool subset_sum(int arr[], int n, int sum) {
	if(n == 0 && sum != 0)
		return false;
	else if(sum == 0)
		return true;

	if(t[n][sum]!= -1)
		return t[n][sum];

	if(arr[n-1] <= sum)
		return t[n][sum]=(subset_sum(arr, n-1, sum-arr[n-1]) 
			|| subset_sum(arr, n-1, sum));
	else
		return t[n][sum]=subset_sum(arr, n-1, sum);
}

int main() {
	memset(t, -1, sizeof(t));
	int arr[] = {-5, -2, 4, 8, 7, 3, 10};
	int sum = 23, n = sizeof(arr)/sizeof(arr[0]);
	cout << subset_sum(arr, n, sum);
}