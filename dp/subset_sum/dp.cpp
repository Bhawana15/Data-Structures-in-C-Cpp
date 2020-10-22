#include <bits/stdc++.h>
using namespace std;

bool t[10][10];

bool subset_sum(int arr[], int n, int sum) {
	for(int i=0; i<=n; i++){
		for(int j=0; j<=sum; j++) {
			if (i==0 && j!=0)
				t[i][j] = false;
			else if(j==0)
				t[i][j] = true;
		}
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=sum; j++) {
			if(arr[i-1] <= j)
				t[i][j] = t[i-1][sum-arr[i-1]] || t[i-1][j];
			else
				t[i][j] = t[i-1][j];
		}
	}
	return t[n][sum];
}

int main() {
	memset(t, false, sizeof(t));
	int arr[] = {-5, -2, 4, 8, 7, 3, 10};
	int sum = 21, n = sizeof(arr)/sizeof(arr[0]);
	cout << subset_sum(arr, n, sum);
}