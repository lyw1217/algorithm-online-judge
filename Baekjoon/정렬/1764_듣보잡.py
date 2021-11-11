# 1764번 - 듣보잡
# n, m <= 500,000
from sys import stdin
n, m = map(int, input().split(' '))
see = []
listen = []
answer = ''

for i in range(n) :
    see.append(stdin.readline())
for i in range(m) :
    listen.append(stdin.readline())

see.sort()
listen.sort()

name = [n for n in see if n in listen]

for n in name :
    answer += n
print(len(name))
print(answer)

# 시간 초과..