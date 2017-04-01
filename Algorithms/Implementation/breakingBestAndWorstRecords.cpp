/*
The problem can be found at
https://www.hackerrank.com/challenges/breaking-best-and-worst-records
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int best, worst, bestCount = 0, worstCount = 0;
    vector<int> score(n);
    cin >> best;
    worst = best;
    for(int score_i = 1; score_i < n; score_i++){
       cin >> score[score_i];
        if (score[score_i] > best) {
            best = score[score_i];
            bestCount++;
        } else if (score[score_i] < worst) {
            worst = score[score_i];
            worstCount++;
        }
    }
    
    cout << bestCount << " " << worstCount << endl;
    
    return 0;
}

