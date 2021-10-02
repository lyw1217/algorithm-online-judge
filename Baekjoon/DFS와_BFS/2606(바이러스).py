# 2606번 - 바이러스
from collections import deque

n = int(input()) # 컴퓨터의 수
graph = {}
edge = int(input()) # 직접 연결되어 있는 컴퓨터 쌍의 수

for i in range(1, edge+1) :
    graph[i] = set((map(int, input().split(' '))))

print(graph)

def bfs(graph, root) :
    queue   = deque([root])    # deque
    visited = []    # 방문한 노드
    
    while queue :
        cur_node = queue.popleft()

        if cur_node not in visited :
            visited.append(cur_node)
            queue += graph[cur_node] - set(visited)
            print('queue = ', queue)
            print('graph[cur_node] = ', graph[cur_node])
            print('visited = ' , set(visited))
    
    return visited

print(len(bfs(graph, 1)))

