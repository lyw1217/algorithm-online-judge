#include<stdio.h>
#define EQUAL(x,y) ((x == y) ? printf("==") : COMPARE(x,y))
#define COMPARE(x,y) ((x > y) ? printf(">") : printf("<"))

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	EQUAL(a, b);
	return 0;
}