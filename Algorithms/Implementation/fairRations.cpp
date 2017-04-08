/*
The problem can be found at 
https://www.hackerrank.com/challenges/fair-rations
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> B(N);
    vector<int> Odd;
    int oddCount = 0;
    int breadCost = 0;
    for(int B_i = 0; B_i < N; B_i++){
       cin >> B[B_i];
       if (B[B_i] % 2 == 1) {
           Odd.push_back(B_i);
           oddCount++;
       }
    }
    
    /*  
		We must change the parity of two numbers at a time,
    	so if there are an odd number of people with an odd number
    	of loaves, it would be impossible. The formula for minimum loaves
    	to distribute was obtained from observing a pattern with simple inputs.
    */
    
    if (oddCount % 2 == 1) {
        cout << "NO" << endl;  
    } else {
        for (int i = 1; i <= oddCount / 2; i++) {
            breadCost += (Odd[2 * i - 1] - Odd[2 * i - 2]) * 2;
        }
        cout << breadCost << endl;
    }
    
    
    return 0;
}

