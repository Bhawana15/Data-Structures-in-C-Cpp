/* 
You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.
Given n, find the total number of full staircase rows that can be formed. 
n is a non-negative integer and fits within the range of a 32-bit signed integer.

Example 1:
n = 5
The coins can form the following rows:
¤
¤ ¤
¤ ¤
Solution : 2
Explanation : Because the 3rd row is incomplete, we return 2.

Example 2:
n = 8
The coins can form the following rows:
¤
¤ ¤
¤ ¤ ¤
¤ ¤
Solution : 3
Explanation : Because the 4th row is incomplete, we return 3.
*/

// SOLVING THIS USING SHRIDHARACHARYA FORMULA FOR SOLVING EQUATIONS WITH COMPLEXITY O(1)
/* 
     SHRIDHARACHARYA FORMULA FOR SOLVING EQUATIONS IS
     ax^2 +  bx + c = 0
     x1 = (-b + sqrt(b^2 - 4*a*c))/2
     x2 = (-b - sqrt(b^2 - 4*a*c))/2

     Also we knoww, n = x*(x+1)/2
     So equation is: x^2 + x - 2*n = 0
     x = (-1 + sqrt(1 + 8*n))/2;
*/
#include <iostream>
#include <cmath>
using namespace std;

class arranging_coins {
public:
    int arrangeCoins(int n) {
        long long stairs = n;
        return (-1 + sqrt(1 + 8*stairs))/2;
    }
};

int main(int argc, char const *argv[])
{
    cout << "SOLVING THIS USING SHRIDHARACHARYA FORMULA FOR SOLVING EQUATIONS WITH COMPLEXITY O(1)\n";
    arranging_coins coins;
    cout << "Arraning 8 coins in the form of stairs : " << coins.arrangeCoins (8) << " complete rows are filled.\n";
    return 0;
}