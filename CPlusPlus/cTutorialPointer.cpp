/*
The problem can be found at
https://www.hackerrank.com/challenges/c-tutorial-pointer
*/

#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a, int *b) {
    int temp = *a;
    *a += *b;
    *b = abs(temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
