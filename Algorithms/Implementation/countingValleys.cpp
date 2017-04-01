/*
The problem can be found at
https://www.hackerrank.com/challenges/counting-valleys
*/


#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    string input;
    cin >> input;
    
    int level = 0;
	bool valleyStart = false;
	bool valleyEnd = false;
	int valleys = 0;
	
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'U') level++;
		else level--;
		if (!valleyStart && level < 0) valleyStart = true;
		if (valleyStart && level == 0) valleyEnd = true;
		if (valleyStart && valleyEnd) {
			valleys++;
			valleyStart = false;
			valleyEnd = false;
		}
	}
	
	cout << valleys << endl;
    
    
    return 0;
}

