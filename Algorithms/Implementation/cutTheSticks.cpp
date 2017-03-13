/*
The problem can be found at
https://www.hackerrank.com/challenges/cut-the-sticks
*/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n, min = 2147483647, sticksCut;
    cin >> n;
    
    sticksCut = n;
    
    vector<int> arr(n);
 
    for(int arr_i = 0;arr_i < n;arr_i++){ // while getting input, find the shortest stick
        cin >> arr[arr_i];
        if (arr[arr_i] < min) min = arr[arr_i];
    }
    
    while (sticksCut != 0) {
        cout << sticksCut << endl; // print number of remaining sticks
        sticksCut = 0;
        for (int i = 0; i < n; i++) {
            arr[i] -= min;			// decrease each stick length by length of shortest stick
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) sticksCut++; // count sticks with positive length
        }
        min = 2147483647;
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0 && arr[i] < min) min = arr[i]; // find new shortest stick, ignore non positive values
        }
    }
    
    return 0;
}

