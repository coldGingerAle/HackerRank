/* 
The problem can be found at
https://www.hackerrank.com/challenges/designer-pdf-viewer
*/

#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int maxHeight = 0;
    
    for (int i = 0; i < word.length(); i++) {
        if (h[((int)word[i] - 97)] >= maxHeight) maxHeight = h[((int)word[i] - 97)];
    }
    
    cout << maxHeight * word.length();
    
    return 0;
}

