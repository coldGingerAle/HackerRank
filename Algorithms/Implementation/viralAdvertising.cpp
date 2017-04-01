/*
The problem can be found at
https://www.hackerrank.com/challenges/strange-advertising/submissions/code/39672297
*/

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int Likes(int n) {
    if (n == 1) return 2;
    return floor((3 * Likes(n - 1) / 2));
}

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += floor(Likes(i));
    }
    cout << sum;
    return 0;
}

