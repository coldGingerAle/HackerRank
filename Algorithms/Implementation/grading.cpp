/*
The problem can be found at
https://www.hackerrank.com/challenges/grading
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
       
        if (grade < 37) {
            cout << grade << endl;
        } else if (grade % 5 > 2) {
            cout << grade - grade % 5 + 5 << endl;
        } else {
            cout << grade << endl;
        }
    }
    return 0;
}
