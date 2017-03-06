/*
The problem can be found at
https://www.hackerrank.com/challenges/plus-minus
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, p = 0, neg = 0, z = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if (arr[arr_i] > 0) p++;
        else if (arr[arr_i] < 0) neg++;
        else z++;
    }
    cout << (double) p / n << endl;
    cout << (double) neg / n << endl;
    cout << (double) z / n << endl;
    
    return 0;
}

