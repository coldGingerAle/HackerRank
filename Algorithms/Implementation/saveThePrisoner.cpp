/*
The problem can be found at
https://www.hackerrank.com/challenges/save-the-prisoner
*/

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    
    int t;
    
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, m, s;
        cin >> n >> m >> s;
        if ((s + m) % n == 0) cout << n - 1 << endl;
        else if ((s + m) % n == 1) cout << n << endl;
        else cout << (s + m) % n - 1 << endl; 
    }
    
    return 0;
}

