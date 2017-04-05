/*
The problem can be found at
https://www.hackerrank.com/challenges/beautiful-triplets
*/

#include <vector>
#include <iostream>
using namespace std;

int main() {
    
    int n, d;
    cin >> n >> d;
    vector<int> data(n);
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    int count = 0;
    // Triple nested loop incoming
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[j] - data[i] != d) continue;
            for (int k = j + 1; k < n; k++) {
                if (data[k] - data[j] != d) continue;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}

