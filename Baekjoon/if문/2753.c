// 2753번 - 윤년(c)

#include<stdio.h>

int main() {
	int year;
	scanf("%d", &year);

	// �ڵ� ����ȭ
	// 4�� ����̸鼭 25�� ����� �ƴϰų� 400�� ����ΰ� �� - 1 ���� - 0
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