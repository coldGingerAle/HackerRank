/*
The problem can be found at
https://www.hackerrank.com/challenges/mars-exploration
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.length() / 3;
    string pure;
    for (int i = 0; i < n; i++) {
        pure += "SOS";
    }
    int count = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] != pure[i]) count++;
    }
    cout << count << endl;
    return 0;
}

