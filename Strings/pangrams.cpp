/*
The problem can be found at
https://www.hackerrank.com/challenges/pangrams
*/

#include <string>
#include <iostream>
using namespace std;

int main() {
    string s = "abcdefghijklmnopqrstuvwxyz";
    string S = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    bool isThere[26] = {false};
    string input;
    string part;
    while (cin >> part) {
        input += part;
    }
    for (int i = 0; i < 26; i++) {
        for (char c : input) {
            if (c == s[i] || c == S[i]) isThere[i] = true;
        }
    }
    bool flag = true;
    for (bool b : isThere) {
        if (!b) flag = b;    
    }
    if (flag) cout << "pangram";
    else cout << "not pangram";
    
    return 0;
}

