# 2751 - 수 정렬하기 2
from sys import stdin
n = int(stdin.readline())   # input() 보다 빠르다. 시간초과 -> 1488ms
num = []
for i in range(n) :
    num.append(int(stdin.readline()))

num = sorted(num)
result = ''
for i in num :
    #print(i)    # 한 줄 씩 출력하는 것보다 문자열에 더하는 것이 더 빠르다 1488ms -> 1400ms
    #result += (str(i) + '\n')
    result += f'{i}\n'  # + 연산자를 사용하는 것보다 f-string 사용하는 것이 더 빠르다. 1400ms->1288ms
print(result)