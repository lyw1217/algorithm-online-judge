// 11047번 - 동전 0

#include<iostream>

using namespace std;

int main() {
	int n, k;
	int count = 0;
	int coin[10] = { 0, };
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}

	for (int i = n-1; i >= 0; i--) {
		if (k / coin[i] > 0) {
			count += k / coin[i];
			k %= coin[i];
		}
	}

	cout << count;

	return 0;
}