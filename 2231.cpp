#include <iostream>

using namespace std;

/* 
	245의 분해합은 245+2+4+5 = 256
	즉, 256의 생성자는 245
	i + get_sep(i)가 n이 되는 가장 작은 수
	-> 단순히 이렇게 풀었을 때 시간은 36ms

	=시간단축방법=
	N의 생성자가 abcd라는 숫자라고 해보자.
	그럼 N == abcd + a + b + c + d가 된다.
	이항하면 abcd == N - (a + b + c + d)
	그런데 각 자리(a,b,c,d)의 최댓값은 9이므로
	N - (9 + 9 + 9 + 9)는 abcd의 최솟값이 된다.
	즉, (N - 9 * 최대 자리수) 부터 N 까지만 반복해서
	생성자의 유무를 확인해보면 시간을 단축할 수 있다.(0ms)
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