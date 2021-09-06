# 1546번 - 평균

n = int(input())
result = list(map(int,input().split(' ')))      # map function
# result = [int(x) for x in input().split(' ')] # list comprehension
max_score = max(result)

for i in range(n) :
    result[i] = int(result[i]) / max_score * 100
    if result[i] > 100 :
        result[i] = 100

print(sum(result)/n)