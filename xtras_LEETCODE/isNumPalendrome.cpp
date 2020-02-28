#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        cout << x << " x" <<endl;
        if (x < 0) 
            return false;
        if (x == 0 || x == 1) 
            return true;
        int y = x, reverse = 0;
        while (y != 0) {
            reverse = 10 * reverse + y % 10;
            y /= 10;
        }

        cout << reverse << endl;
        if (x == reverse) 
            return true;
        else 
            return false;
    }
};

int main() {
    Solution s;
    bool t = s.isPalindrome(10);
    cout <<"ans  " << t << endl;
    return 'a';
}
