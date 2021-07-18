n , m = input().split(' ')
n = int(n)
m = int(m) - 45
if m < 0 :
    m = m % 60
    n = n - 1

if n < 0 :
    n = 23

print(str(n) + ' ' + str(m))
