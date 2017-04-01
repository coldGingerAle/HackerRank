/*
The problem can be found at
https://www.hackerrank.com/challenges/electronics-shop
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0;keyboards_i < n;keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> pendrives(m);
    for(int pendrives_i = 0;pendrives_i < m;pendrives_i++){
       cin >> pendrives[pendrives_i];
    }
    
    int output = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (keyboards[i] + pendrives[j] > output && keyboards[i] + pendrives[j] <= s) output = keyboards[i] + pendrives[j];
        }
    }
    cout << output << endl;
    
    
    return 0;
}

