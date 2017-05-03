/*
The problem can be found at
https://www.hackerrank.com/challenges/the-time-in-words
*/

#include <iostream>
#include <string>
using namespace std;

string toString(int i) {  
    switch(i) {
        case 1: return "one"; break;
        case 2: return "two"; break;
        case 3: return "three"; break;
        case 4: return "four"; break;
        case 5: return "five"; break;
        case 6: return "six"; break;
        case 7: return "seven"; break;
        case 8: return "eight"; break;
        case 9: return "nine"; break;
        case 10: return "ten"; break;
        case 11: return "eleven"; break;
        case 12: return "twelve"; break;
        case 13: return "thirteen"; break;
        case 14: return "fourteen"; break;
        case 16: return "sixteen"; break;
        case 17: return "seventeen"; break;
        case 18: return "eighteen"; break;
        case 19: return "nineteen"; break;
        case 20: return "twenty"; break;
        case 21: return "twenty one"; break;
        case 22: return "twenty two"; break;
        case 23: return "twenty three"; break;
        case 24: return "twenty four"; break;
        case 25: return "twenty five"; break;
        case 26: return "twenty six"; break;
        case 27: return "twenty seven"; break;
        case 28: return "twenty eight"; break;
        case 29: return "twenty nine"; break;
        default: return ""; break;
    }   
}

int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    string hour;
    if (m == 0) {
        cout << toString(h) + " o' clock";
    } else if (m == 1) {
        cout << "one minute past " + toString(h);
    } else if (m < 14 || m > 15 && m < 30) {
        cout << toString(m) + " minutes past " + toString(h);
    } else if (m == 15) {
        cout << "quarter past " + toString(h);
    } else if (m == 30) {
        cout << "half past " + toString(h);
    } else if (m == 45) {
        cout << "quarter to " + toString(h + 1);
    } else if (m == 59) {
        cout << "one minute to " + toString(h + 1);
    } else if (m > 30) {
        cout << toString(60 - m) + " minutes to " + toString(h + 1);
    }
    
    return 0;
}

