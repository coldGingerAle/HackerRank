/*
The problem can be found at
https://www.hackerrank.com/challenges/birthday-cake-candles
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];
    }
    sort(height.begin(), height.end());
    int count = 0;
    int index = height.size() - 1;
    int max = height[height.size() - 1];
    while (height[index] == max) {
        count++;
        index--;
    }
    cout << count << endl;
    return 0;
}


