/*
The problem can be found at 
https://www.hackerrank.com/challenges/library-fine
*/

#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    
    int yDelta = y1 - y2;
    int mDelta = m1 - m2;
    int dDelta = d1 - d2;
    
    if (yDelta > 0) {
        cout << 10000;
    } else if (yDelta == 0) {
        if (mDelta > 0) {
            cout << mDelta * 500;
        } else if (mDelta == 0) {
            if (dDelta > 0) {
                cout << dDelta * 15;
            } else {
                cout << 0;
            }
        } else if (mDelta < 0) cout << 0;
    } else cout << 0;
    
    return 0;
}

