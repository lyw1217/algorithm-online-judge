#include <iostream>
#include <string>

using namespace std;

int main() {
	string alpha[] = { "c=","c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string word;
	int count = 0;

	cin >> word;

	for (int i = 0; i < word.length()-1; i++) {
		for (int j = 0; j < 8; j++) {
			if (j == 2) {
				if (word.substr(i, 3) == alpha[j]) {
					count++;
				}
			}
			else {
				if (word.substr(i, 2) == alpha[j]) {
					count++;
				}
			}
		}
	}
	cout << word.length() - count;

	return 0;
}