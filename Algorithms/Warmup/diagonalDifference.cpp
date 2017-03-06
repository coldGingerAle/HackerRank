/*
The problem can be found at
https://www.hackerrank.com/challenges/diagonal-difference
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, diagA = 0, diagB = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
           if (a_i == a_j) diagA += a[a_i][a_j];
           if (a_i + a_j == n - 1) diagB += a[a_i][a_j];
       }
    }
    
    cout << abs(diagA - diagB) << endl;
    
   
  
    return 0;
}
