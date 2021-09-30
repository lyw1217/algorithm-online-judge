# 5086번 - 배수와 약수

while True :
    n, m = map(int, input().split(' '))
    if n == 0 and m == 0 : break
    print('factor' if m % n == 0 else 'multiple' if n % m == 0 else 'neither')

# 문제가 좀 불친절하다