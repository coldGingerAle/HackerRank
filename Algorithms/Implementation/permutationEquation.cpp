/*
The problem can be found at
https://www.hackerrank.com/challenges/permutation-equation
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    
    for (int i = 1; i < n + 1; i++) {
        cin >> a[i];
    }
    
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            if (a[a[j]] == i) cout << j << endl;
        }
    }
    
    return 0;
}
