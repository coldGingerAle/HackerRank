/*
The problem can be found at
https://www.hackerrank.com/challenges/find-digits
*/

#include <vector>
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int count = 0;
        int temp = n;
        while (temp > 0) {
            if (temp % 10 == 0) {
                temp /= 10;
                continue;
            }
            if ((n % (temp % 10)) == 0) count++;
            temp /= 10;
        }
        cout << count << endl;
    }
    return 0;
}

