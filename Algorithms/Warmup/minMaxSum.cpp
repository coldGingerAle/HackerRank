/*
The problem can be found at
https://www.hackerrank.com/challenges/mini-max-sum
*/

#include <iostream>
#include <climits>
using namespace std;

int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    
    long int min = LONG_MAX;
    long int max = 0;
    long int temp = 0;
    
    long int nums[5] = {a, b, c, d, e};
     
    for (int j = 0; j < 5; j++) {
        temp = 0;
        for (int i = 0; i < 4; i++) {
            temp += nums[(i + j) % 5]; 
        }
        if (temp <= min) min = temp;
        if (temp >= max) max = temp; 
    }
    
    cout << min << " " << max << endl;
    
    return 0;
}

