/*
The problem can be found at
https://www.hackerrank.com/challenges/flatland-space-stations
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> hasSS(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> hasSS[c_i];
    }
    int maxDist = 0;
    for (int i = 0; i < n; i++) {
        int nearest = n;
        for (int j = 0; j < m; j++) {
            if (abs(hasSS[j] - i) < nearest) nearest = abs(hasSS[j] - i);
        }
        if (nearest > maxDist) maxDist = nearest;
    }
    cout << maxDist << endl;
    return 0;
}

