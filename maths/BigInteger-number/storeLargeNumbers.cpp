/*
Given an integer N in form of string str consisting of more than 100 digits, 
the task is to store the value for performing an arithmetic operation and print 
the given integer.

No data type is present in C++ to store 10100. 
So, the idea is to use get the input as string (as string can be of any length) 
and then convert this string into an array of digits of the length same as the 
length of string. Storing the big integer into an integer array will help to 
perform some basic arithmetic on that number.
*/

#include <iostream> 
using namespace std; 

int* getLargeNumbers(string str) {
	int n=str.length();
	int *a = new int[n];
	for(int i=0;i<n;i++)
		a[i] = str[i]-'0';
	return a;
}

int main() 
{ 
    string str = "12345678098765431234567809876543568898421098776542134556767788990909765422233"; 
    int *a = getLargeNumbers(str);
    for(int i=0; i<str.size();i++)
    	cout << a[i];
    return 0; 
} 