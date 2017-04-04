/*
The problem can be found at 
https://www.hackerrank.com/challenges/lisa-workbook
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int chapters, maxProblems, specialProblems = 0;
    cin >> chapters >> maxProblems;
	vector<int> problems(chapters);
    for (int i = 0; i < chapters; i++) {
        cin >> problems[i];
    }
	
	vector<vector<int>> book;
	
	// Plan: each vector is a page, where the 0th element is the page number, and the rest are problem indices
	int pageNumber = 1;
	for (int i = 0; i < chapters; i++) {
		vector<int> page = {pageNumber};
		for (int j = 1; j <= problems[i]; j++) {
			if (j % maxProblems == 1 && j > maxProblems) { // we exceed the problems per page limit, so create a new page
				book.push_back(page); // add previous page to book
				pageNumber++; // increment page number
				page = {pageNumber}; // the 0th element is page number
			}
            if (maxProblems == 1) { // 1 is special case that slips through the logic above
                page.push_back(j);
                if (j == pageNumber) specialProblems++;
                book.push_back(page);
                pageNumber++;
                page = {pageNumber};
                continue;
            }
			page.push_back(j); // add problem index to book
			if (j == pageNumber) specialProblems++; // a special problem is found, increment counter
		}
		book.push_back(page); // add page to book
		pageNumber++; // increment page number
	}
	
	cout << specialProblems << endl;

}
