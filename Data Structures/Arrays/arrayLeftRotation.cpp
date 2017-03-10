/*
The problem can be found at
https://www.hackerrank.com/challenges/array-left-rotation
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n, d;
    cin >> n >> d;
    
    int a[n];
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> a[i];
    }
    
    int b[n];
    
    for (int i = 0; i < n; i++) {
        b[i] = a[(i + d) % n];
    }
    
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";   
    }
    
  return 0;
}

