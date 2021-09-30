// 1260번 - DFS와 BFS

#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
using namespace std;

vector<int> graph[1001];
int 		check[1001];

void dfs(int node) {	
	
	
	check[node] = 1;	
	printf("%d ", node) ;
	
	for (int i = 0; i < graph[node].size(); i++) {
		int adj_node = graph[node][i];
		if (!check[adj_node]) {
			dfs(adj_node);
		}
	}
}

void bfs(int node) {
	memset(check, 0, sizeof(check));	// sizeof(check) / sizeof(check[0]) 이따위로 하지 말자
	queue<int> q;
	
	q.push(node);
	check[node] = 1;

	while (!q.empty()) {
		int cur_node = q.front();
		
		printf("%d ", cur_node);
		
		q.pop();
		
		for (int i = 0; i < graph[cur_node].size(); i++) {
			int adj_node = graph[cur_node][i];

			if (!check[adj_node]) {
				q.push(adj_node);
				check[adj_node] = 1;
			}
		}
	}
}

int main() {
	int p_node, c_node;
	int total_node, edge, start;
	cin >> total_node >> edge >> start;

	for (int i = 0; i < edge; i++) {
		cin >> p_node >> c_node;
		graph[p_node].push_back(c_node);
		graph[c_node].push_back(p_node);
	}
	
	for (int i = 1; i <= total_node; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(start);
	printf("\n");
	bfs(start);

	return 0;
}