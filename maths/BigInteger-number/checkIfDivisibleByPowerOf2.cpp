#include <bits/stdc++.h>  
using namespace std; 
  
bool checkIfDivisible(string str, int num) {
	long long int powerOf2 = log2(num), len = str.length();
	if(len < powerOf2)
		return false;
	if(powerOf2 == 0)
		return true;

	long long int i, temp=0;
	for(i = len-powerOf2; i<len;i++)
		temp = temp*10 + (str[i]-'0');
	return temp % num ? 0:1;
}

int main() 
{ 
    string str = "213467756564"; 
    long long int num = 4; 
    if (checkIfDivisible(str, num)) 
        cout << "Yes"; 
    else
        cout << "No"; 
  
    return 0;
}