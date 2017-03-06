/*
The problem can be found at
https://www.hackerrank.com/challenges/bon-appetit
*/

#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n, k, b, annaAte = 0;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i != k) annaAte += a[i];
    }
    
    cin >> b;
    
    if (b - annaAte / 2.0 == 0) cout << "Bon Appetit";
    else cout << (b - annaAte / 2.0);
    
    return 0;
}
