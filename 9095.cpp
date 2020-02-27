#include<iostream>

using namespace std;

int Case(int n) {
	/*	
		A[n] = A[n-1] + A[n-2] + A[n-3]
		예를 들어, 7 = 1+6 / 2+5 / 3+4 로 나타낼 수 있으므로
		7을 구성하는 방법의 수 = 6을 구성하는 방법의 수 + 5를 구성하는 방법의 수 + 4를 구성하는 방법의 수
		로 표현할 수 있다.
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

	// 아래처럼 연산자를 이용해도 된다.
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