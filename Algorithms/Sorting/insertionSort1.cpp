/*
The problem can be found at
https://www.hackerrank.com/challenges/insertionsort1
*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

void insertionSort(vector <int>  ar) {
    int toInsert = ar[ar.size() - 1];
    int indexToInsert = ar.size() - 2;
    for (int i = ar.size() - 2; ar[i] > toInsert; i--) {
        ar[i + 1] = ar[i];
        indexToInsert = i;
        print(ar);
    }
    ar[indexToInsert] = toInsert;
    print(ar);
}

int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}

