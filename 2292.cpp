#include<iostream>
#include<algorithm>

using namespace std;

long long int sum(long long int n) {
	long long int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += i;
	}
	return sum;
}

int main() {

	/* 
		각 레이어별로 생각.
		가운데를 1번, 2~7을 2번, 8~19을 3번 레이어...
		레이어의 시작점 : 6 * sum(0 ~ n-1) + 1
		시작점이 num보다 더 커지면 그 때의 i값이 num이 속한 레이어
	*/
	long long int num;
	cin >> num;
	
	for (int i = 1;; i++) {
		if ((6 * sum(i) + 1) >= num) {
			cout << i;
			break;
		}
	}

	return 0;
}