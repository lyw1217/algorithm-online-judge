# 2606번 - 바이러스
from collections import deque

n = int(input()) # 컴퓨터의 수
graph = {}

for i in range(n) :
    graph[i+1] = set()

edge = int(input()) # 직접 연결되어 있는 컴퓨터 쌍의 수

for i in range(edge) :
    a, b = (map(int, input().split(' ')))
    graph[a].add(b)
    graph[b].add(a)

def bfs(graph, root) :
    queue   = deque([root])    # deque
    visited = [ ]    # 방문한 노드
    
    while queue :
        cur_node = queue.popleft()

        for i in graph[cur_node] :
            if i not in visited :
                queue.append(i)
                visited.append(i)
   
    return visited

print(len(bfs(graph, 1))-1)