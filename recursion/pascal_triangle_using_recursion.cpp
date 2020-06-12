/* Pascal’s triangle is the triangular arrangement of binomial coefficients using recursion
       1
      1 1
     1 2 1 
    1 3 3 1
   1 4 6 4 1

The size of the problem is n. Thus, the base case corresponds to n = 0, where the output is simply a list containing a 1 ([1]). 
For n = 1 we cannot apply the recursive rule. Thus, initially it appears that we may need an additional base case for n = 1,
where the output is ([1,1]). However, since all of the rows for n > 0 begin and end with a 1, these elements can be incorporated 
in the recursive case by default. Thus, in this scenario a special base case for n = 1 would be unnecessary.
*/

#include <iostream>
using namespace std;

int main() {
	cout << "PASCAL’S TRIANGLE IS THE TRIANGULAR ARRANGEMENT OF BINOMIAL COEFFICIENTS USING RECURSION\n";
	cout << "Enter the height of the Pascal’s tree :  ";
	cin >> n;
	cout 
	return 0;
}