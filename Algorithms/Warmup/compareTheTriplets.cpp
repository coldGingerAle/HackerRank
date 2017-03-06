/*
The problem can be found at 
https://www.hackerrank.com/challenges/compare-the-triplets
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    
    int aScore = 0, bScore = 0;
    if (a0 > b0) {
        aScore++;
    } else if (b0 > a0) {
        bScore++;
    } 
    if (a1 > b1) {
        aScore++;
    } else if (b1 > a1) {
        bScore++;
    } 
    if (a2 > b2) {
        aScore++;
    } else if (b2 > a2) {
        bScore++;
    } 
    cout << aScore << " " << bScore <<endl;
    return 0;
}
