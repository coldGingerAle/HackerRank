/*
The problem can be found at
https://www.hackerrank.com/challenges/circular-array-rotation
*/

#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    vector<int> rightShifted(n);
    for(int a_i = 0; a_i < n; a_i++){
        cin >> a[a_i];
        rightShifted[(a_i + k) % n] = a[a_i];
    }
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        cout << rightShifted[m] << endl;
    }
    return 0;
}

