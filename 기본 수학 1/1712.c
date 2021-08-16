// 1712번 - 손익분기점

#include <stdio.h>

int main() {
	long fixed_cost;	// ���� ���
	long variable_cost; // ���� ���
	long product_price;	// ��ǰ ����
	long net_profit;	// ������
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