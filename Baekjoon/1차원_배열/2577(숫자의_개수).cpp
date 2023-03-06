// 2577번 - 숫자의 개수

#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int main (void) {
    int a,b,c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    long long mul = a*b*c;
    int digit;
    int nums[10] = {0, };

    for (int i=0; i<10; i++) {
        if ( mul == 0 ) break;
        digit = mul % 10 ;
        mul /= 10 ;
        nums[digit] += 1;
    }

    for (int i=0; i<10; i++) {
        printf("%d\n", nums[i]);
    }
}