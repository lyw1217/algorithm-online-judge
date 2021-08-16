#include <stdio.h>

int main() {
	long fixed_cost;	// 고정 비용
	long variable_cost; // 가변 비용
	long product_price;	// 제품 가격
	long net_profit;	// 순이익
	int i;

	scanf("%ld %ld %ld", &fixed_cost, &variable_cost, &product_price);

	net_profit = product_price - variable_cost;
	if (net_profit <= 0) {
		printf("-1");
		return 0;
	}

	for (i=0;;i++) {
		if (i > fixed_cost / net_profit) {
			printf("%d", i);
			break;
		}
	}	

	return 0;
}