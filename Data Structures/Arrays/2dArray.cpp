/*
The problem can be found at
https://www.hackerrank.com/challenges/2d-array
*/

#include <vector>
#include <iostream>
using namespace std;

int main(){
    int arr[6][6];
    for(int i = 0; i < 6; i++){
       for(int j = 0; j < 6; j++){
          cin >> arr[i][j];
       }
    }
    int maxSum = -9 * 6;
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2] >= maxSum) {
                maxSum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            }
        }
    }
    cout << maxSum;
    return 0;
}

