/*
The problem can be found at 
https://www.hackerrank.com/challenges/variable-sized-arrays
*/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, q;
    cin >> n >> q;
    
    vector <vector <int>> a;
    
    
    for (int i = 0; i < n; i++) {
        int length;
        cin >> length;
        vector<int> line = {};
        for (int j = 0; j < length; j++) {
            int input;
            cin >> input;
            line.push_back(input);
        }
        a.push_back(line);
    }
    
    for (int x = 0; x < q; x++) {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
      
    return 0;
}

