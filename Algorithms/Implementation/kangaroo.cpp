/*
The problem can be found at
https://www.hackerrank.com/challenges/kangaroo

Explanation of solution:
Kangaroo 1 at x1 is behind kangaroo 2 at x2, so kangaroo 1 needs to be faster to catch up. 
So if v2 >= v1, then kangaroo 1 can never catch up.
If the kangaroos do meet, they would meet after k jumps, where x1 + k * v1 = x2 + k * v2
and k is an integer. 
I used the floor function to check whether k is an integer, (floor function applied
to an integer would just return the integer itself).

*/


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    if (v2 >= v1 || ((double)(x2 - x1) / (v1 - v2)) != floor ((x2 - x1) / (v1 - v2))) cout << "NO";
    else cout << "YES";
    
    return 0;
}

