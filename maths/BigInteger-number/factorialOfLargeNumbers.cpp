/*
Factorial of a non-negative integer, is the multiplication of all integers 
smaller than or equal to n.
For example factorial of 6 is 6*5*4*3*2*1 which is 720.
Factorial of 100 has 158 digits. 
It is not possible to store these many digits even if we use long long int.
Input : 100
Output : 933262154439441526816992388562667004-
         907159682643816214685929638952175999-
         932299156089414639761565182862536979-
         208272237582511852109168640000000000-
         00000000000000

Input :50
Output : 3041409320171337804361260816606476884-
         4377641568960512000000000000
*/

#include<iostream> 
#include <vector>
using namespace std; 

#define MAX 300

int multiply(int x, vector<int>& res, int res_size){
	int carry=0;
	for(int i=0; i<res_size; i++) {
		int prod = res[i]*x + carry;
		res[i] = prod%10;
		carry=prod/10;
	}

	while(carry) {
		res[res_size]=carry%10;
		carry/=10;
		res_size++;
	}
	return res_size;
}

void factorial(int num) {
	vector<int> res(MAX);
	res[0]=1;
	int res_size=1;

	for(int x=2; x<=num; x++)
		res_size = multiply(x, res, res_size);

	for(int i=res_size-1; i>=0; i--)
		cout<<res[i];
	cout<<endl;
}

int main() 
{ 
    factorial(100); 
    return 0; 
} 