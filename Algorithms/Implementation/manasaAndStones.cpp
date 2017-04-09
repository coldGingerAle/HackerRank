/*
The problem can be found at
https://www.hackerrank.com/challenges/manasa-and-stones
*/

#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, a, b;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++) {
            if (b > a) {
                cout << a * (n - 1) + (b - a) * i << " ";
            } else if (b < a) {
                cout << b * (n - 1) + (a - b) * i << " ";
            } else if (a == b) {
                cout << (n - 1) * a;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}

