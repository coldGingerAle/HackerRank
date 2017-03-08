/*
The problem can be found at
https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int k;
    int Energy = 100;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    int aerithPosition = 0;
    Energy--;
    aerithPosition = (aerithPosition + k) % n;
    if (c[aerithPosition] == 1) Energy -= 2;
    while (aerithPosition != 0) {
        Energy--;
        aerithPosition = (aerithPosition + k) % n;
        if (c[aerithPosition] == 1) Energy -= 2;
    }
    cout << Energy;
    return 0;
}

