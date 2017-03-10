/*
The problem can be found at
https://www.hackerrank.com/challenges/append-and-delete
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    
    int divIndex = 0; //indicates where the strings start to diverge
    
    while (s[divIndex] == t[divIndex] && divIndex < max(s.length(), t.length())) {
        divIndex++; // 
    }
    
    int minErases = s.length() - divIndex; //mininum number of erases that will be necessary
    int minAppends = t.length() - divIndex; //minimum number of appends that will be necessary
    int minOperations = minErases + minAppends; //minimum number of total operations that will necessary
    
    if (minOperations == 0) { //the strings are equivalent
        if (k >= 2 * s.length() || k % 2 == 0) cout << "Yes"; //we can delete string s completely and append to get t, or perform redundant operations
        else cout << "No";
    } else if (k >= minOperations && (k - minOperations) % 2 == 0 || k >= s.length() + t.length()) { //perform minimum operations necessary (may also include redundant operations) or delete string s completely and append to get t
        cout << "Yes";
    } else cout << "No";
    
    return 0;
}

