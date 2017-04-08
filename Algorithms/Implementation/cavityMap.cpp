/*
The solution can be found at
https://www.hackerrank.com/challenges/cavity-map
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0|| i == n - 1 || j == 0 || j == n - 1) {
                cout << grid[i][j];
                continue;
            }
            bool cavity = true;
            if (grid[i-1][j] >= grid[i][j] || grid[i][j-1] >= grid[i][j] || grid[i][j+1] >= grid[i][j] || grid[i+1][j] >= grid[i][j]) cavity = false;
            if (cavity) cout << "X";
            else cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}

