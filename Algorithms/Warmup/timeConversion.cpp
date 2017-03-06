/*
The problem can be found at
https://www.hackerrank.com/challenges/time-conversion
*/

#include <iostream>
using namespace std;

int main(){
    string time;
 
    cin >> time;
     int n = (time[0] - '0') * 10 + time[1] - '0';
    
    if (time[time.length() - 2] == 'A') {
        if (n == 12) {
            time[0] = '0';
            time[1] = '0';
        }
        time.erase(time.length() - 2, 2);
    }
    else if (n == 12) time.erase(time.length() - 2, 2);
    else {
        n+= 12;
        time[0] = (char) (n / 10  + 48);
        time[1] = (char) (n % 10 + 48);
        time.erase(time.length() - 2, 2);
      
    }
    cout << time;
    return 0;
}

