#include <iostream>

using namespace std;

int main() {
	int n, fibo[20] = { 0, 1, };

	cin >> n;
	if (n < 2) {
		cout << fibo[n];
	}
	else {
		for (int i = 2; i <= n; i++) {
			fibo[i] = fibo[i - 1] + fibo[i - 2];
		}
		cout << fibo[n];
	}

	return 0;
}