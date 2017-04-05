/*
The problem can be found at
https://www.hackerrank.com/challenges/the-birthday-bar
*/

#include <vector>
#include <iostream>
using namespace std;

int getWays(vector < int > squares, int d, int m){
    // Basically, check all possible m-consecutive sums
    // Increment counter if condition is met
    // At the end, return counter
    int ways = 0;
    for (int i = 0; i <= squares.size() - m; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += squares[i + j];
        }
        if (sum == d) ways++;
    }
    return ways;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = getWays(s, d, m);
    cout << result << endl;
    return 0;
}

