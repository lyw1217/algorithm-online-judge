#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

int main() {
	int n, x, y;
	pair<int, int>* pos = new pair<int, int>[100000];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		pos[i] = { x, y };
		//pos[i] = make_pair(x, y);
	}

	sort(pos, pos + n);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", pos[i].first, pos[i].second);
	}

	delete[] pos;

	return 0;
}