# 7562번 - 나이트의 이동
from collections import deque

# DFS는 가장 멀리 있는 노드를 우선적으로 탐색하기 때문에 최소경로를 찾기 어렵고
# BSF는 가까운 노드를 우선적으로 탐색하기 때문에 최소경로를 찾기에 적합하다.

'''
나이트가 이동할 수 있는 경우의 수
 x  y
-2 +1
-2 -1
-1 +2
-1 +2
+2 +1
+2 -1
+1 +2
+1 -2
8가지
'''
# 이동 가능한 좌표
mx = [-2, -2, -1, -1, 2, 2, 1, 1]
my = [ 1, -1,  2,  2, 1,-1, 2,-2]

def knight() :
    l               = int(input()) # 체스판의 한 변의 길이(체스판은 l x l 크기), 4 <= l <= 300
    cur_x , cur_y   = list(map(int, input().split(' '))) # 현재 위치
    dest_x, dest_y  = list(map(int, input().split(' '))) # 목표 위치
    if cur_x == dest_x and cur_y == dest_y :
        return 0
    queue           = deque([cur_x, cur_y])
    visited         = [ [0 for i in range(l)] for i in range(l) ] # 방문한 노드가 몇 번째 이동한 뒤 방문인지
    visited[cur_x][cur_y] = 1

    while queue :
        x, y = queue.popleft()  # 현재 위치
        if x == dest_x and y == dest_y :
            return visited[x][y]
        
        # 체스판보다 멀리 나가면 break
        if x >= l or y >= l :
            break
        
        for i in range(8) : # 움직일 수 있는 가짓수가 8가지이므로
            # 이동한 좌표
            tmp_x = x + mx[i]
            tmp_y = y + my[i]

            # 좌표가 0 ~ (l-1) 사이의 값을 가지므로 이동한 좌표가 체스판의 범위 밖이면 다른 노드를 탐색한다.
            if tmp_x < 0 or tmp_y < 0 or tmp_x >= l or tmp_y >= l :
                continue
            
            if visited[tmp_x][tmp_y] == 0 :
                print("HERE")
                visited[tmp_x][tmp_y] = visited[x][y] + 1
                queue.append([tmp_x, tmp_y])

    return (-1)
                
n = int(input())    # 테스트 케이스의 개수

for i in range(n) :
    print(knight())

