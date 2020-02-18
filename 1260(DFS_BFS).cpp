#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring> // memset 함수 사용을 위해
using namespace std;

vector<int> graph[10000];
bool check[10000];

void dfs(int node) {	
	if (check[node]) return; // 만약 현재 노드를 방문했다면(true)
	
	check[node] = true;	// 방문하지 않았다면 현재 노드를 방문처리
	cout << node << ' ';	// 노드 출력
	
	for (int i = 0; i < graph[node].size(); i++) {
		// 현재 노드와 연결되어 있는 모든 인접 노드를 찾고
		int adj_node = graph[node][i];
		// 인접 노드에서부터 다시 DFS 수행
		dfs(adj_node);
	}
}

void bfs(int node) {
	memset(check, 0, sizeof(check) / sizeof(check[0]));
	queue<int> q;
	
	// 시작 노드 큐에 넣기 / 방문처리
	q.push(node);
	check[node] = true;

	// 큐가 빌 때까지 반복
	while (!q.empty()) {
		// 현재 노드는 큐의 가장 앞의 것
		int cur_node = q.front();
		q.pop();

		// 큐에서 빠져나오면 출력
		cout << cur_node << ' ';

		// 현재 노드와 연결되어 있는 모든 인접노드를 찾고
		for (int i = 0; i < graph[cur_node].size(); i++) {
			int adj_node = graph[cur_node][i];

			// 방문하지 않은 인접노드들을 큐에 넣어버리고 방문처리
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

	// 그래프 그리기
	for (int i = 0; i < edge; i++) {
		cin >> p_node >> c_node;
		// 양방향으로 설정
		graph[p_node].push_back(c_node);
		graph[c_node].push_back(p_node);
	}
	
	// 방문할 수 있는 인접노드가 여러 개인 경우 번호가 작은 것부터 방문
	// 오름차순으로 정렬
	for (int i = 0; i < total_node; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(start);
	cout << '\n';
	bfs(start);

	return 0;
}