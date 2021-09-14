# 2438번 - 별찍기-1

n = int(input())
for i in range (n):
    str = ''
    for j in range (i+1):
        str += '*'
    print(str)
