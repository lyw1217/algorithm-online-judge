#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, temp = 0, sum = 0, arr[1000] = { 0, };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		temp += arr[i];
		sum += temp;
	}

	cout << sum;

	return 0;
}