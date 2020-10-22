#include <iostream>
#include <stack>
using namespace std;

void is_balanced (string s, int len) {
    stack<char> stck;
    for (int i = 0; i < len; i++) {
        if (s[i] == '(')
            stck.push(s[i]);
        if (!stck.empty() && s[i] == ')')
            stck.pop();
    }
    if (stck.empty())
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
}

int main ( ) 
{
    string str = "(a+(b-c))";
    string str1 = "((a+b)" ;

    is_balanced(str, 9);
    is_balanced(str, 6);
    return 0;
}