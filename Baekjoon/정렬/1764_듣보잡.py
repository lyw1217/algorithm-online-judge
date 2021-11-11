# 1764번 - 듣보잡
from sys import stdin
n, m = map(int, input().split(' '))
see = []
listen = []
count = 0
answer = ''
if n > m :
    for i in range(n) :
        see.append(stdin.readline())
    for i in range(m) :
        name = stdin.readline()
        if name in see :
            listen.append(name)
            count += 1
    for n in listen :
        answer += n
else :
    for i in range(m) :
        listen.append(stdin.readline())
    for i in range(n) :
        name = stdin.readline()
        if name in listen :
            see.append(name)
            count += 1
    for n in see :
        answer += n
print(count)
print(answer)

# 시간 초과