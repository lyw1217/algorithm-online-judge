# 15649번 - N과 M(1)
'''
https://www.acmicpc.net/problem/15649
문제
자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.

1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
입력
첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)

출력
한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.

수열은 사전 순으로 증가하는 순서로 출력해야 한다.
'''

# DFS(Depth First Search) 문제
# 깊이 우선 탐색
# 모든 노드를 방문하고자 할 때 사용
# 자기 자신을 호출하는 순환 알고리즘의 형태
# 어떤 노드의 방문 여부를 반드시 검사해야한다. 그렇지 않으면 무한루프에 빠질 가능성이 있다.
# 재귀 또는 스택을 이용하여 구현
n , m = input().split()
n = int(n)
m = int(m)
'''
n , m = map( int, input().split() )
'''

visit   = [ False for i in range(n) ]
node    = [ 0 for i in range(n) ]

def series(count):
    # 깊이가 M이면 탐색 과정에서 담은 리스트를 출력 후 리턴
    if count == m :
        for i in range(m) :
            print(node[i], end=' ')
        print()
        return
    
    for i in range(n) :
        if visit[i] == False :  # 방문하지 않았다면
            visit[i] = True     # 방문함으로 표시 후
            node[count] = i + 1 # 방문한 인덱스를 리스트에 넣고
            series(count + 1)   # 다음 자식 노드 방문
            visit[i] = False    # 자식 노드 방문이 끝나고 돌아오면 방문하지 않음으로 표시

series(0)

