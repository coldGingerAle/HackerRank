/*
The problem can be found at
https://www.hackerrank.com/challenges/ctci-array-left-rotation
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        b[i] = a[(i + k) % n];
        cout << b[i] << " ";
    }
 
    
    return 0;
}