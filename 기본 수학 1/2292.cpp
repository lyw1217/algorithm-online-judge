// 2292번 - 벌집

#include<iostream>

using namespace std;

int main() {

	/*
		�� ���̾� ���� �� ĭ�� �����ϰ� �ִ��� ������.
		1 - 1
		2 - 6
		3 - 12
		4 - 18
		...
		6�� �����ŭ�� �����ϰ� ������ n�� sum(6*i)���� �۰ų� �������� ������ (i+1)����
		n�� �ڸ��ϰ� �ִ� ���̾��� ��ȣ�� �ȴ�.
	*/
	long long int num, temp;
	cin >> num;
	temp = 1;
	for (long long int i = 0;; i++) {
		temp += 6 * i;
		cout << "temp : " << temp << endl;
		if (temp >= num) {
			cout << i + 1;
			break;
		}
	}

	return 0;
}