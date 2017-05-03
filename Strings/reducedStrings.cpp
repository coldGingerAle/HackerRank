/*
The problem can be found at
https://www.hackerrank.com/challenges/reduced-string
*/

#include <vector>
#include <iostream>
using namespace std;

bool eraseable(int i, string s) {
    return (s[i] == s[i + 1]);
}

int main() {
    string s;
    cin >> s;
    bool flag = true;
    while (flag) {
        flag = false;
        for (int i = 0; i < s.length(); i++) {
            if (eraseable(i, s)) {
                s.erase(s.begin() + i, s.begin() + i + 2);
                flag = true;
            }
        }
    }
    if (s == "") cout << "Empty String";
    else cout << s;
    return 0;
}

