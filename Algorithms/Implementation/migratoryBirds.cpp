/*
The problem can be found at 
https://www.hackerrank.com/challenges/migratory-birds
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
    }
    
    sort(types.begin(), types.end());
    
    vector<int> getTypes, count;
    
    int x = types[0];
    getTypes.push_back(x);
    count.push_back(0);
    
    
    for (int i = 1; i < types.size(); i++) {
        if (x != types[i]) {
            x = types[i];
            getTypes.push_back(x);
            count.push_back(0);
        }
    }
    
    for (int i = 0; i < types.size(); i++) {
        for (int j = 0; j < getTypes.size(); j++) {
            if (types[i] == getTypes[j]) {
                count[j]++;
            }
        }
    }
    
    int maxCount = count[0];
    int output = getTypes[0];
    for (int i = 1; i < count.size(); i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            output = getTypes[i];
        }
    }
    
    cout << output << endl;
    
    return 0;
}

