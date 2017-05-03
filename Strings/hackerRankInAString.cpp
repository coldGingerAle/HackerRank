/*
The problem can be found at
https://www.hackerrank.com/challenges/hackerrank-in-a-string
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int q;
    cin >> q;
    string h = "hackerrank";
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int index = 0;
        int prevChar = -1;
        char c = h[index];
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == h[index] && i > prevChar) {
                prevChar = i;
                index++;
                count++;
            }
        }
        if (count == h.length()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

