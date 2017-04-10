/*
The problem can be found at
https://www.hackerrank.com/challenges/strange-code
*/

#include <iostream>
#include <cmath>
using namespace std;

long long int func(int i) {
    return 3 * (pow(2, i + 1) - 1);
}

int main(){
    long long int t;
    cin >> t;
    long i = 0;
    while (func(i) < t) {
        i++;
    }
    cout << func(i) - t + 1 << endl;
    return 0;
}

