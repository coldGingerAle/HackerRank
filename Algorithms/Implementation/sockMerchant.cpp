/*
The question can be found at
https://www.hackerrank.com/challenges/sock-merchant
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, matches = 0;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i]; 
    }
    
    vector<int> uniqueVals;
    for (int i = 0; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < uniqueVals.size(); j++) {
            if (uniqueVals[j] == c[i]) {
                flag = false;
            }
        }
        if (flag) uniqueVals.push_back(c[i]);
     }
     
    vector<int> count(uniqueVals.size(), 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < uniqueVals.size(); j++) {
            if (c[i] == uniqueVals[j]) count[j]++;
        }
    }
    
    for (int i = 0; i < count.size(); i++) {
        matches += count[i] / 2;
    }
    
    cout << matches;
    
    return 0;
}
