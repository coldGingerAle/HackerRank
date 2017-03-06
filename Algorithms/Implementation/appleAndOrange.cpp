/* 
The solution can be found at 
https://www.hackerrank.com/challenges/apple-and-orange
*/

#include <vector>
#include <iostream>
using namespace std;

int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    
    int aHouse = 0, oHouse = 0;
    
    for (int i = 0; i < m; i++) {
        if (a + apple.at(i) >= s && a + apple.at(i) <= t) aHouse++;
    }
    
    for (int i = 0; i < n; i++) {
        if (b + orange.at(i) <= t && b + orange.at(i) >= s) oHouse++;
    }
    
    cout << aHouse << endl;
    cout << oHouse << endl;
    
    return 0;
}

