// 9095번 - 1,2,3 더하기

#include<iostream>

using namespace std;

int Case(int n) {
	/*	
		A[n] = A[n-1] + A[n-2] + A[n-3]
		���� ���, 7 = 1+6 / 2+5 / 3+4 �� ��Ÿ�� �� �����Ƿ�
		7�� �����ϴ� ����� �� = 6�� �����ϴ� ����� �� + 5�� �����ϴ� ����� �� + 4�� �����ϴ� ����� ��
		�� ǥ���� �� �ִ�.
	*/

	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 2;
	}
	else if (n == 3) {
		return 4;
	}

	return Case(n-1) + Case(n-2) + Case(n-3);

	// �Ʒ�ó�� �����ڸ� �̿��ص� �ȴ�.
	// return (n <= 3) ? (n == 3) ? 4 : ((n == 2) ? 2 : 1) : (Case(n - 1) + Case(n - 2) + Case(n - 3));
}

int main() {
	int t, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << Case(n) << '\n';
	}

	return 0;
}