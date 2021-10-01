# 2609번 - 최대공약수와 최소공배수
'''
# using math
import math
n,m = map(int, input().split(' '))
print(math.gcd(n,m))
print(math.lcm(n,m))
'''

# not using math
n = list(map(int, input().split(' ')))
gcd = 1
n = sorted(n)
'''
for i in range(1, n[0] + 1) :
    if n[0] % i == 0 and n[1] % i == 0 :
        gcd = i
'''
# using Euclidean algorithm
a, b = n[0], n[1]
while b != 0 :
    a, b = b, a % b
    gcd = a

print(gcd)

lcm = n[0] * n[1] // gcd
print(lcm)