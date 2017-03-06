/*
The problem can be found at
https://www.hackerrank.com/challenges/between-two-sets
*/

#include <vector>
#include <iostream>
using namespace std;

bool condOne(int x, vector<int> a, int n) {
    for (int i = 0; i < n; i++) {
        if (x % a.at(i) != 0) return false;
    }
    return true;
}

bool condTwo(int x, vector<int> b, int m) {
    for (int i = 0; i < m; i++) {
        if (b.at(i) % x != 0) return false;
    }
    return true;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    
    int aMax = 0;
    int bMin = 100;
    
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
        if (a[a_i] >= aMax) aMax = a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
        if (b[b_i] <= bMin) bMin = b[b_i];
    }
    
    int count = 0;
    
    for (int i = aMax; i <= bMin; i++) {
        if (condOne(i, a, n) && condTwo(i, b, m)) count++;
    }
    
    cout << count;
    
    return 0;
}
