import itertools

PRIME = 0
COMPOSITE = 1

def check_prime(number) :
    ''' 소수면 PRIME, 합성수면 COMPOSITE'''
    for i in range(2, number//2) :
        if number % i == 0 :
            return COMPOSITE
    return PRIME

def solution(numbers):
    answer = 0
    
    num = set() # 중복되는 숫자를 제거하기 위해 set 사용

    for i in list(map(list, itertools.permutations(numbers))) :
        tmp = ''
        for j in range(len(i)) :
            tmp += i[j]
        num.add(int(tmp))
    
    for i in numbers :
        for j in i :
            j = int(j)
            if j > 1 :
                num.add(j)

    for n in num :
        # 숫자가 0, 1인 경우 제외
        if n > 1 :
            if check_prime(n) == PRIME :
                answer += 1

    return answer

if __name__ == "__main__":
    numbers   = ["17", "011", "123"]
    answer    = [3   ,     2,     2]

    for i in range(len(numbers)) :
        print('number = ', numbers[i])
        result = solution(numbers[i])
        print( 'result = ' , result)
        if result == answer[i] :
            print( 'SUCCESS' )
        else :
            print( 'FAIL' )
        print('')

'''
    max_pos = len(numbers)  # 조합 가능한 수의 최대 자릿수
    pos = 1 # 자릿수
    idx = 0

    # 가능한 모든 숫자 탐색
    while True :
        # 최대 자릿수까지 자릿수를 하나씩 늘려가면서
        for n in range(1, max_pos+1) :
            print('n = ', n)
            for i in range(n) :
                print ('i = ', i)
                print('number[{}:{}]'.format(i,i+n))
                # 정방향
                print('numbers[i:i+n] = ', numbers[i:i+n])
                num.add(numbers[i:i+n])

                # 역방향
                print('-(i+n+1) = {} , -i-1 = {}'.format(-(i+n+1), -i-1))
                print('numbers[i+n:i:-1] = ', numbers[-(i+n+1):-i-1:-1])
                num.add(numbers[-(i+n+1):-i-1:-1])

            print(num)
        break
'''

'''
라이브러리 사용해도 잘 안됨 
뭔가 다른게 있나봄.. 

테스트 1  〉	통과 (0.13ms, 10.4MB)
테스트 2  〉	실패 (1.08ms, 10.5MB)
테스트 3  〉	통과 (0.02ms, 10.2MB)
테스트 4  〉	통과 (3.51ms, 10.3MB)
테스트 5  〉	통과 (5.08ms, 10.7MB)
테스트 6  〉	통과 (0.02ms, 10.4MB)
테스트 7  〉	실패 (0.04ms, 10.3MB)
테스트 8  〉	통과 (4.79ms, 10.6MB)
테스트 9  〉	실패 (0.03ms, 10.3MB)
테스트 10 〉	실패 (996.06ms, 10.4MB)
테스트 11 〉	실패 (32.13ms, 10.3MB)
테스트 12 〉	실패 (0.14ms, 10.4MB)
'''