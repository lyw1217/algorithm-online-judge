#include <iostream>
#include <string>

using namespace std;

int main() {
	int number;
	int sum = 0;
	string n;

	cin >> number;
	cin >> n;

	for (int i = 0; i < number; i++) {
		// 한 숫자의 값을 정수형으로 바꾸려면 c - '0' 하면 된다.
		// 아스키 코드표에서 [문자] 0 ~ 9 <=> [10진수] 48 ~ 57
		sum += (n.at(i) - '0');
	}

	cout << sum;

	return 0;
}