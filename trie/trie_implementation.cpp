#include <bits/stdc++.h> 
using namespace std;

struct trie {
    struct trie* child[26];
    bool isend;

    trie () {
        memset (child, 0, sizeof(child));
        isend = false;
    }
};

struct trie* root;

void insert(string str) {
    struct trie* cur = root;
    for (char ch : str) {
        int idx = ch - 'a';
        if (cur->child[idx] == NULL)
            cur->child[idx] = new trie;
            cur = cur->child[idx];
    }
    cur->isend = true;
}

bool search(string str) {
    struct trie* cur = root;
    for (char ch : str) {
        int idx = ch - 'a';
        if (cur->child[idx] == NULL)
            return false;
        cur = cur->child[idx];
    }
    return cur->isend;
}

int main() {
    int x;
    root = new trie;
    cout << "$$$$$$$$  TRIE IMPLEMENTATION IN CPP  $$$$$$$$$\n";
    cout << "Enter the number of strings you want to insert :\n";
    cin >> x;
    while (x--) {
        string str;
        cin >> str;
        insert (str);
    }
    cout << "Enter the number of strings you want to search :\n";
    cin >> x;
    while (x--) {
        string str;
        cin >> str;
        if (search (str))
            cout << str << " is PRESENT\n";
        else
            cout << str << " is NOT PRESENT\n";
    }
    return 0;
}