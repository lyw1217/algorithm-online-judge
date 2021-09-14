// 11720번 - 숫자의 합

#include <iostream>
#include <string>

using namespace std;

int main() {
	int number;
	int sum = 0;
	string n;

	cin >> number;
	cin >> n;

	for (int i = 0; i < number; i++) {
		// �� ������ ���� ���������� �ٲٷ��� c - '0' �ϸ� �ȴ�.
		// �ƽ�Ű �ڵ�ǥ���� [����] 0 ~ 9 <=> [10����] 48 ~ 57
		sum += (n.at(i) - '0');
	}

	cout << sum;

	return 0;
}