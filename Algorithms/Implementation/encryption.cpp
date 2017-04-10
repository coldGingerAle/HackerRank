/*
The problem can be found at
https://www.hackerrank.com/challenges/encryption
*/

#include <cmath>
#include <vector>
#include <iostream>
#include<string>
using namespace std;


int main(){
    string s;
    cin >> s;
    int rows;
    if (floor(sqrt(s.length())) * ceil(sqrt(s.length())) >= s.length()) {
        rows = floor(sqrt(s.length()));
    } else {
        rows = ceil(sqrt(s.length()));
    }
    int cols = ceil(sqrt(s.length()));
    int index = 0;
    char **charArray = new char*[rows];
    for (int i = 0; i < rows; i++) {
        charArray[i] = new char[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (index == s.length()) break;
            charArray[i][j] = s[index++];
        }
    }
    
    index = 0;
    for (int c = 0; c < cols; c++) {
        for (int r = 0; r < rows; r++) {
            if (charArray[r][c] != '\0') {
                cout << charArray[r][c];
                index++;
            }
            if (index == s.length()) goto end;
        }
        cout << " ";
    }
    
    end:
    
    return 0;
}

