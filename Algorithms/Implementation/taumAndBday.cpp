/*
The problem can be found at
https://www.hackerrank.com/challenges/taum-and-bday
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long b;
        long w;
        cin >> b >> w;
        long x;
        long y;
        long z;
        cin >> x >> y >> z;
        long values[3] = {b * x + w * y, b * x + w * (x + z), w * y + b * (y + z)};
        cout << *min_element(values, values + 3) << endl;
    }
    return 0;
}

