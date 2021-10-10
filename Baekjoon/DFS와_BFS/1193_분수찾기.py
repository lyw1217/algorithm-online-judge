# 1193번 - 분수찾기

def seek_fraction(n) :
    # 공차가 1인 등차수열들 중
    count = 0
    while n > 0 :
        count += 1  # n이 그 수열에서 몇 번쨰 위치인지
        n -= count  # n이 들어있는 수열의 최댓값 - 1

    # 수열의 최댓값이 짝수라면
    if count % 2 == 0 :
        return f'{count + n}/{1 + (-n)}'
    # 수열의 최댓값이 홀수라면
    else :
        return f'{1 + (-n)}/{count + n}'
    
n = int(input())

print(seek_fraction(n))

'''
공차가 1인 등차수열들로 구성됨

1  1/1

2  1/2
3  2/1

4  3/1
5  2/2
6  1/3

7  1/4
8  2/3
9  3/2
10 4/1

11 5/1
12 4/2
13 3/3
14 2/4
15 1/5
'''