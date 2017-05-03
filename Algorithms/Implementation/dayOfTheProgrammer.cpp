/*
The problem can be found at
https://www.hackerrank.com/challenges/day-of-the-programmer
*/

#include <iostream>
#include <string>
using namespace std;

int days(int month) {
    switch (month) {
        case 1: 
            return 31;
            break;
        case 2:
            return 28;
            break;
        case 3:
            return 31;
            break;
        case 4:
            return 30;
            break;
        case 5:
            return 31;
            break;
        case 6:
            return 30;
            break;
        case 7:
            return 31;
            break;
        case 8:
            return 31;
            break;
        case 9:
            return 30;
            break;
        case 10:
            return 31;
            break;
        case 11:
            return 30;
            break;
        case 12:
            return 31;
            break;
    }
    return 0;
}

bool leapJulian(int year) {
    if (year % 4 == 0) return true;
    return false;
}

bool leapGregorian(int year) {
    if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0) return true;
    return false;
}

string toString(int i) {
    if (i < 10) {
        return "0" + to_string(i);
    } else {
        return to_string(i);
    }
}

string solve(int year){
    if (year < 1918) {
        int numDays = 0;
        int month;
        if (leapJulian(year)) numDays++;
        for (int i = 1; numDays <= 256; i++) {
            numDays += days(i);
            month = i;
        }
        string output = toString(256 - numDays + days(month)) + "." + toString(month) + "." + toString(year);
        return output;
    } else if (year == 1918) {
        int numDays = 46;
        int month;
        if(leapGregorian(1918)) numDays++;
        for (int i = 3; numDays <= 256; i++) {
            numDays += days(i);
            month = i;
        }
        string output = toString(256 - numDays + days(month)) + "." + toString(month) + "." + toString(year);
        return output;
    } else {
        int numDays = 0;
        int month;
        if (leapGregorian(year)) numDays++;
        for (int i = 1; numDays <= 256; i++) {
            numDays += days(i);
            month = i;
        }
        string output = toString(256 - numDays + days(month)) + "." + toString(month) + "." + toString(year);
        return output;
    }
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}

