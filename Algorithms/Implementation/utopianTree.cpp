/*
	The problem can be found at
	https://www.hackerrank.com/challenges/utopian-tree
*/

#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

//We use a recursive function to find height of tree at cycle n
int heightN(int n) {
    if (n == 0) return 1;
    else if (n % 2 == 1) return 2 * heightN(n - 1);
    else return (heightN(n - 1) + 1);    
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << heightN(n) << endl;
    }
    
    return 0;
}

