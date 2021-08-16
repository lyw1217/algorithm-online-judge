#include<iostream>

using namespace std;

int main() {

	/*
		각 레이어 별로 몇 칸씩 차지하고 있는지 세보자.
		1 - 1
		2 - 6
		3 - 12
		4 - 18
		...
		6의 배수만큼씩 차지하고 있으니 n이 sum(6*i)보다 작거나 같아지는 순간의 (i+1)값이
		n이 자리하고 있는 레이어의 번호가 된다.
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