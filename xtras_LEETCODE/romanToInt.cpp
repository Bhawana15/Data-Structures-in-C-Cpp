#include <iostream>
#include <unordered_map>
#include <string>
#include <cstring>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        unordered_map<string, int> umap;
        umap["I"] = 1;
        umap["V"] = 5;
        umap["X"] = 10;
        umap["L"] = 50;
        umap["C"] = 100;
        umap["D"] = 500;
        umap["M"] = 1000;
        char char_array[s.length() + 1];
        strcpy (char_array, s.c_str());
        char ch1, ch2;
        if (s.length() == 1){
             ch1 = char_array[0];
                num = umap[string(1, ch1)];
                return num;
        }
        for(int i = 0, j = 1; i < s.length() - 1 ; ) {
            ch1 = char_array[i];
            ch2 = char_array[j];
            if (umap[string(1, ch1)] >= umap[string(1, ch2)]) {
                num += umap[string(1, ch1)];
                if (i == s.length() - 2 && j == s.length() - 1)
                    num += umap[string(1, ch2)];
                i++;
                j++;
            }
            else if (umap[string(1, ch1)] < umap[string(1, ch2)]) {
               num = num + umap[string(1, ch2)] - umap[string(1, ch1)]; 
               i = i + 2;
               j = j + 2;
               if (j == s.length() && i == s.length() - 1){
                ch1 = char_array[i];
                num += umap[string(1, ch1)];
               }
            }
        }
        return num;
    }
};

int main() {
    Solution sol;
    string s = "D";
    cout << sol.romanToInt(s) << endl;
    return 0;
}