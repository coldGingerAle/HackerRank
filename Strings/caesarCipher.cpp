/*

The problem can be found at
https://www.hackerrank.com/challenges/caesar-cipher-1

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    string o;
    for (int i = 0; i < s.size(); i++) {
        if (!(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)) {
            o += s[i];
        } else if ((int)s[i] < 91) {
            o += (char)((s[i] + k - 65) % 26 + 65); 
        } else {
            o += (char)((s[i] + k - 97) % 26 + 97);
        }
    }
    cout << o << endl;
    return 0;
}

