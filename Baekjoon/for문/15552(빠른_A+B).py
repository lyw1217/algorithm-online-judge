# 15552번 빠른 A+B

import sys
t = int(sys.stdin.readline().rstrip())

for i in range(t) :
    a = sys.stdin.readline().rstrip().split(" ")
    sum = 0
    for j in a :
        sum = sum + int(j)
    print(sum)