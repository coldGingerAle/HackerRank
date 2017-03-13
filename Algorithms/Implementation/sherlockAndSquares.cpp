/*
The problem can be found at
https://www.hackerrank.com/challenges/sherlock-and-squares
*/

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    
    int a, b, t, count;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
            count = 0;
            cin >> a >> b;
            for (int j = ceil(sqrt(a)); j * j <= b; j++) {
                if (a <= j * j <= b) count++;
            }
            cout << count << endl;
    }
    
    return 0;
}

