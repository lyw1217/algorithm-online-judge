# 11021번 - A+B-7

n = int(input())
for i in range(n):
    a = input().split(' ')
    print('Case #' + str(i+1) + ': ' + str(int(a[0])+int(a[1])))