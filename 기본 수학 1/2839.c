#include <stdio.h>

int main() {
	int sugar;
	int remain;
	int q_5 = 1;

	scanf("%d", &sugar);
	
	if (sugar % 5 == 0) {
		// 설탕이 5킬로그램으로 나누어 떨어지면 몫을 반환
		printf("%d", sugar / 5);
		return 0;
	}
	else {
		// 설탕을 5킬로그램으로 최대한 나눈 다음
		q_5 = sugar / 5;
		// 나머지를 저장
		remain = sugar - 5 * q_5;

		while (q_5 >= 0) {
			// 그 나머지가 3킬로그램으로 나누어 떨어질 때까지
			if (remain % 3 == 0) {
				// 나누어 떨어지면 5로 나눈 몫과 3으로 나눈 몫을 더해서 출력
				printf("%d", q_5 + (remain / 3));
				return 0;
			}
			// 3으로 나누어 떨어지지 않으면 5킬로그램으로 나눈 몫을 줄이고 나머지를 그만큼 늘림
			q_5--;
			remain += 5;
		}
		// 5와 3으로 나눌 수 없는 값이 반복문을 탈출함
		printf("-1");
	}
	
	return 0;
}