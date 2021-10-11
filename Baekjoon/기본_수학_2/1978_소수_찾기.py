PRIME = 0
COMPOSITE = 1

def check_prime(number) :
    ''' 소수면 PRIME, 합성수면 COMPOSITE'''
    if number < 2 :
        return COMPOSITE
    for i in range(2, int(number**(1/2))+1) :
        if number % i == 0 :
            return COMPOSITE
    return PRIME

n = int(input())
num = list(map(int, input().split(' ')))
result = 0
for i in num :
    if check_prime(i) == PRIME :
        result += 1
print(result)

