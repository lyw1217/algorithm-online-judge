// 1193번 - 분수찾기

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
/*
1  1/1

2  1/2
3  2/1

4  3/1
5  2/2
6  1/3

7  1/4
8  2/3
9  3/2
10 4/1

11 5/1
12 4/2
13 3/3
14 2/4
15 1/5
*/

// 공차가 1인 수열

int main(void) {
    int n;
    scanf("%d",&n);
    int count = 0;

    while ( n > 0 ) {
        count++;
        n -= count;
    }

    if ( count%2 == 0 ) {
        printf("%d/%d", count+n, -(n)+1);
    } else {
        printf("%d/%d", -(n)+1, count+n);
    }
}