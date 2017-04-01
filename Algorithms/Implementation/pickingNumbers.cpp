/*
The problem can be found at
https://www.hackerrank.com/challenges/picking-numbers/submissions/code/40566249
*/

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> uniqueVector;
 
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       bool flag = true;
       for (int i = 0; i < uniqueVector.size(); i++) {
           if (uniqueVector[i] == a[a_i]) flag = false;
       }
        if (flag) {
            uniqueVector.push_back(a[a_i]);
        }
    }
    
    int answer = 0;
    for (int j = 0; j < uniqueVector.size(); j++) {
        int countA = 0;
        int countB = 0;
        int countC = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] - uniqueVector[j] == 1) countA++;
            if (a[i] - uniqueVector[j] == -1) countB++;
            if (a[i] - uniqueVector[j] == 0) countC++;
        }

        if (countC + max(countA, countB) > answer) answer = countC + max(countA, countB);
    }
    
    cout << answer;
    
    return 0;
}

