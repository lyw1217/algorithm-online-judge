# 15650번 - N 과 M(2)
# DFS를 통한 조합 구하기

from itertools import combinations
n, m = map(int, input().split())
comb = combinations(range(1, n+1), m)
for i in comb:
    print(' '.join(map(str, i)))