'''
백준 3020번 - 개똥벌레
N : 동굴의 길이(짝수) (2 <= N <= 200,000)
H : 동굴의 높이 (2 <= H <= 500,000)
첫 번째 장애물은 항상 석순, 그 다음은 종유석과 석순이 번갈아가며 나타남
높이 1미터씩 구간을 나누고 구간을 지나갈 때 파괴해야하는 장애물의 최솟값과 그러한 구간이 총 몇개 있는지 출력
'''
from sys import stdin

n, h = map(int, input().split(' '))

path = [0 for _ in range(h)]    # 높이 만큼의 리스트

# 장애물(석순, 종유석)이 있는 위치를 표시
# 높이가 3인 석순이라면 path[0 ~ 2]의 값을 1씩 증가
# 높이가 4인 종유석이라면 ptrh[-1 ~ -4]의 값을 1씩 증가
for i in range(n) :
    obs = int(stdin.readline())
    if i % 2 == 0 :
        for j in range(obs) :
            path[j] += 1
    else :
        for j in range(h-1, h-obs-1, -1) :
            path[j] += 1

path.sort()
num = 0
min = path[0]
for i, v in enumerate(path) :
    if min != v :
        num = i
        break
print(min, num)
# min(path), path.count() 도 시간 초과