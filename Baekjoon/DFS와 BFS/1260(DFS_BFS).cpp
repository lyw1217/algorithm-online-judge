// 1260번 - DFS와 BFS

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring> // memset �Լ� ����� ����
using namespace std;

vector<int> graph[10000];
bool check[10000];

void dfs(int node) {	
	if (check[node]) return; // ���� ���� ��带 �湮�ߴٸ�(true)
	
	check[node] = true;	// �湮���� �ʾҴٸ� ���� ��带 �湮ó��
	cout << node << ' ';	// ��� ���
	
	for (int i = 0; i < graph[node].size(); i++) {
		// ���� ���� ����Ǿ� �ִ� ��� ���� ��带 ã��
		int adj_node = graph[node][i];
		// ���� ��忡������ �ٽ� DFS ����
		dfs(adj_node);
	}
}

void bfs(int node) {
	memset(check, 0, sizeof(check) / sizeof(check[0]));
	queue<int> q;
	
	// ���� ��� ť�� �ֱ� / �湮ó��
	q.push(node);
	check[node] = true;

	// ť�� �� ������ �ݺ�
	while (!q.empty()) {
		// ���� ���� ť�� ���� ���� ��
		int cur_node = q.front();
		q.pop();

		// ť���� ���������� ���
		cout << cur_node << ' ';

		// ���� ���� ����Ǿ� �ִ� ��� ������带 ã��
		for (int i = 0; i < graph[cur_node].size(); i++) {
			int adj_node = graph[cur_node][i];

			// �湮���� ���� ���������� ť�� �־������ �湮ó��
			if (!check[adj_node]) {
				q.push(adj_node);
				check[adj_node] = true;
			}
		}
	}
}


int main() {
	int p_node, c_node;
	int total_node, edge, start;
	cin >> total_node >> edge >> start;

	// �׷��� �׸���
	for (int i = 0; i < edge; i++) {
		cin >> p_node >> c_node;
		// ��������� ����
		graph[p_node].push_back(c_node);
		graph[c_node].push_back(p_node);
	}
	
	// �湮�� �� �ִ� ������尡 ���� ���� ��� ��ȣ�� ���� �ͺ��� �湮
	// ������������ ����
	for (int i = 0; i < total_node; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(start);
	cout << '\n';
	bfs(start);

	return 0;
}