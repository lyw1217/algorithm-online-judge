// 1157번 - 단어 공부

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char solution(string str) {
	int alphabet[26] = { 0, };
	int max = -1;
	int count = 0;
	char answer;

	int str_len = str.length();

	for (int i = 0; i < str_len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
		alphabet[(str[i] - 65)]++;
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
		}
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == max) {
			answer = i + 65;
			count++;
		}
	}

	return (count > 1) ? '?' : answer;
}

int main() {
	string str;

	cin >> str;

	cout << solution(str);

	return 0;
}