#include <iostream>
#define SUM(x,y,z) (x+y+z)

using namespace std;

int main() {
	int n, m, max = 0;
	int card[100] = { 0 };
	
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}

	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n-1; j++) {
			for (int k = j+1; k < n; k++) {
				int sum = SUM(card[i], card[j], card[k]);
				if (m >= sum && sum > max) {
					max = sum;
				}
			}
		}
	}

	cout << max;

	return 0;
}