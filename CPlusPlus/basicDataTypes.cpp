/*
The problem can be found at
https://www.hackerrank.com/challenges/c-tutorial-basic-data-types
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long j;
    long long k;
    char l;
    float m;
    double n;
    cin >> i >> j >> k >> l >> m >> n;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << l << endl;
    cout.precision(3);
    cout << fixed << m << endl;
    cout.precision(9);
    cout << fixed << n << endl;
    return 0;
}

