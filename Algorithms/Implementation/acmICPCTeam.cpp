/*
The problem can be found at 
https://www.hackerrank.com/challenges/acm-icpc-team
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    
    int **A = new int*[n];
    
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }
    
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        for (int j = 0; j < m; j++) {
            A[i][j] = (int)input[j] - '0';   
        }
    }
    
    int maxTopics = 0;
    int teams = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int topics = 0;
            for (int k = 0; k < m; k++) {
                topics += A[i][k] | A[j][k];
             }
            if (topics > maxTopics) maxTopics = topics;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int topics = 0;
            for (int k = 0; k < m; k++) {
                topics += A[i][k] | A[j][k];
             }
            if (topics == maxTopics) teams++;
        }
    }
    
    cout << maxTopics << endl;
    cout << teams << endl;

    return 0;
}

