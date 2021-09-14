#include<iostream>
using namespace std;

int make_Team(int n, int m) {
	int count = 0;
	while (1) {
		if ((n - 2 >= 0) && (m - 1 >= 0)) {
			count++;
		}
		n -= 2;
		m -= 1;
		if (n < 0 || m < 0) break;
	}
	return count;
}

int main() {
	int n, m, k;
	int max = 0, temp;

	cin >> n >> m >> k;

	for (int i = 0; i <= k; i++) {
		for (int j = 0; j <= k; j++) {
			if (i + j == k) {
				temp = make_Team(n - i, m - j);
				max = ( max > temp ? max : temp);
			}
		}
	}
	
	cout << max;

	return 0;
}