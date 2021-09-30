// 2231번 - 분해합

#include <iostream>

using namespace std;

/* 
	245�� �������� 245+2+4+5 = 256
	��, 256�� �����ڴ� 245
	i + get_sep(i)�� n�� �Ǵ� ���� ���� ��
	-> �ܼ��� �̷��� Ǯ���� �� �ð��� 36ms

	=�ð�������=
	N�� �����ڰ� abcd��� ���ڶ�� �غ���.
	�׷� N == abcd + a + b + c + d�� �ȴ�.
	�����ϸ� abcd == N - (a + b + c + d)
	�׷��� �� �ڸ�(a,b,c,d)�� �ִ��� 9�̹Ƿ�
	N - (9 + 9 + 9 + 9)�� abcd�� �ּڰ��� �ȴ�.
	��, (N - 9 * �ִ� �ڸ���) ���� N ������ �ݺ��ؼ�
	�������� ������ Ȯ���غ��� �ð��� ������ �� �ִ�.(0ms)
*/
int get_sep(int n) {
	int sep_sum = 0, temp;
	for (int digit = 10; ; digit *= 10) {
		temp = (n % digit);
		sep_sum += temp / (digit / 10);
		n -= temp;
		if (n == 0) return sep_sum;
	}
}

int get_digit(int n) {
	int dec = 10;
	for (int digit = 1; digit <= 7; digit++) {
		if (n / dec == 0) {
			return digit;
		}
		dec *= 10;
	}
}

int main() {
	int n, digit, start;
	
	cin >> n;
	
	digit = get_digit(n);
	start = n - digit * 9;
	for (int i = ((start > 0) ? start : 0 ); i < n; i++) {
		if (n == (i + get_sep(i))) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}