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

if n >= m :
    name = list(set(see) - (set(see[:]) - set(listen[:])))
else :
    name = list(set(listen) - (set(listen[:]) - set(see[:])))
name.sort()
for n in name :
    answer += n
print(len(name))
print(answer)

'''
제출 번호	   아이디	문제	  결과	        메모리	  시간	    언어	  코드 길이	
35329733	lyw1217	1764	맞았습니다!!	46416KB	132ms	Python 3 / 수정	442	
'''