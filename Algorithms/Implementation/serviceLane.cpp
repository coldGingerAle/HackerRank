/*
The problem can be found at
https://www.hackerrank.com/challenges/service-lane
*/

#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        int min = width[i];
        for (int x = i + 1; x <= j; x++) {
            if (width[x] < min) min = width[x];
        }
        cout << min << endl;
    }
    
    return 0;
}

