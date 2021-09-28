# 2908번 - 상수

n, m = map(int, input().split(' '))
n = str(n)[::-1]
m = str(m)[::-1]
print(max(n,m))