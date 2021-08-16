#include<stdio.h>
#define P(x) (printf("%c",x))
int main() {
	int a;
	scanf("%d", &a);
	((a < 60) ? P('F') : ((a < 70) ? P('D') : (a < 80) ? P('C') : ((a < 90) ? P('B') : P('A'))));
	return 0;
}