/*
The problem can be found at
https://www.hackerrank.com/challenges/drawing-book
*/

#include <iostream>
#include <cmath>
using namespace std;

int state (int x) {
    if (x % 2 == 0) return x / 2;
    else return (x - 1) / 2;
}

int main(){
    int n;
    cin >> n;
    int p;
    cin >> p;
    
    cout << min(state(n) - state(p), state(p) - state(1));
    
    return 0;
}

