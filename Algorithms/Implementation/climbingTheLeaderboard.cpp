#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int scores[7] = {100,100,50,40,40,20,10};
	int ranks[7] = {1,1,2,3,3,4,5};
	int scores2[7] = {10,20,40,40,50,100,100};
	
	int alice[5] = {5, 25, 50, 120};
	
	int middle = (7 - 1) / 2;
	
	int left = 0;
	
	int right = 10;
	
	int scores3[10] = {1,2,3,4,5,6,7,8,9,10};
	int test = 3.5;
	while (left <= right) {
		int m = floor((left + right) / 2.0);
		cout << "Middle is " << m << endl;
		if (scores3[m] < test) {
			left = m + 1;
			cout << left << endl;	
		} else if (scores3[m] > test) {
			right = m - 1;
			cout << right << endl;
		} else if (scores3[m] == floor(test)) {
			cout << m;
			break;	
		}
	}
	
}
