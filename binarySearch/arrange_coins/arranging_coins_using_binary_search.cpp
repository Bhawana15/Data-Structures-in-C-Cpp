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

// SOLVING THIS USING BINARY SEARCH WITH COMPLEXITY O(log n)

#include <iostream>
using namespace std;

class arranging_coins {
public:
    int arrangeCoins(int n) {
        if (n == 1)
            return 1;
        int mid = n/2, ans = 0, total;
        while (mid > 0) {
            total = mid * (mid + 1)/2;
            if (n == total)
                return mid;
            else if (n > total) {
                if (n - total < mid + 1)
                    return mid;
                ans = mid;
            }
            else
                mid--;
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    cout << "######  SOLVING THIS USING BINARY SEARCH WITH COMPLEXITY O(log n)  ######\n";
    arranging_coins coins;
    cout << "Arraning 8 coins in the form of stairs : " << coins.arrangeCoins (8) << " complete rows are filled.\n";
    return 0;
}