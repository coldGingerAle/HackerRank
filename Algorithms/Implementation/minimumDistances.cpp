/*
The problem can be found at
https://www.hackerrank.com/challenges/minimum-distances
*/

#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    int min = 2147483647;
    bool minFound = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[j] == A[i] && abs(j - i) < min) {
                min = abs(j - i);
                minFound = true;
            }
        }
    }
    if (!minFound) min = -1;
    cout << min << endl;
    return 0;
}

