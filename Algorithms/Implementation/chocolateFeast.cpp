/*
The problem can be found at
https://www.hackerrank.com/challenges/chocolate-feast
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int eaten = n / c;
        int wrappers = eaten;
        while (wrappers >= m) {
            // exchange wrappers for more candy
            int moreCandy = wrappers / m;
            wrappers = wrappers % m;
            eaten += moreCandy;
            wrappers += moreCandy;
        }
        cout << eaten << endl;
    }
    return 0;
}

