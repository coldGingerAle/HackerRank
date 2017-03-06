/*
The problem can be found at 
https://www.hackerrank.com/challenges/the-hurdle-race
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int k;
    int maxHeight = 0;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
        if (height[height_i] >= maxHeight) maxHeight = height[height_i];
    }
    
    if (k >= maxHeight) cout << "0";
    else cout << maxHeight - k;
    return 0;
}
