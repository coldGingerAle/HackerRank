/*
The problem can be found at
https://www.hackerrank.com/challenges/beautiful-days-at-the-movies
*/

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int reverse(int x) {
    int num = x;
    int temp = 0;
    while (num > 0) {
           temp *= 10;
           temp += num % 10;
            num /= 10;
    }
    return temp;
}

int main() {
    
    int i, j, k, beautiful = 0;
    
    cin >> i >> j >> k;
    
    for (int x = i; x <= j; x++) {
        if (abs(x - reverse(x)) % k == 0) beautiful++;
    }
    
    cout << beautiful;
}

