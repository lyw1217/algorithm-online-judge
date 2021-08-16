#include<stdio.h>

int main() {
	int year;
	scanf("%d", &year);

	// 코드 간결화
	// 4의 배수이면서 25의 배수가 아니거나 400의 배수인것 참 - 1 거짓 - 0
	// printf("%d", !(year % 4) && (year % 25) || !(year % 400));

	if ((year % 4 == 0)) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				printf("1");
				return 0;
			}
			printf("0");
			return 0;
		}
		printf("1");
		return 0;
	}
	printf("0");
	return 0;
}