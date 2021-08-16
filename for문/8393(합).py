# 8393번 - 합

n = int(input())
sum = 0
for a in range(n+1):
    sum = a + sum
print(sum)