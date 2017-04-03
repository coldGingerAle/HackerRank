/*
The solution can be found at
https://www.hackerrank.com/challenges/kaprekar-numbers
*/

#include <cmath>
#include <iostream>
using namespace std;

int numDigits(int n) {
    int digits = 0;
    int temp = n;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    return digits;
}

int main() {
    int p, q;
    cin >> p;
    cin >> q;
    int count = 0;
    for (long i = p; i <= q; i++) {
        if ((i * i) / (long)pow(10, numDigits(i)) + (i * i) % (long)pow(10, numDigits(i)) == i) {
            count++;
            cout << i << " ";
        }
    }
    if (count == 0) cout << "INVALID RANGE" << endl;
    return 0;
}

