// 10872번 - 팩토리얼

#include <iostream>

int main() {
	int n;
	long long tmp = 1;
	scanf("%d", &n);
	long long i;
	for (i = 1; i < n; i++) {
		tmp *= (i + 1);
	}
	printf("%lld", tmp);
	return 0;
}