#include<bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k) {
	int maxnum = 0;
	for (int i = 0; i < n-k+1; i++) {
		maxnum = arr[i];
		for (int j = 1; j < k; j++) {
			maxnum = max(maxnum, arr[i+j]);
		}
		cout << maxnum << endl;
	}
}

int main() {

  #ifdef ONLINE_JUDGE
    // for getting from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

    int arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int k = 4;  
    printKMax(arr, n, k); 
    return 0;
}