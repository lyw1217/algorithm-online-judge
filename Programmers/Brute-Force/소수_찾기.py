import itertools

PRIME = 0
COMPOSITE = 1

def check_prime(number) :
    ''' 소수면 PRIME, 합성수면 COMPOSITE'''
    for i in range(2, int(number**(1/2))+1) :
        if number % i == 0 :
            return COMPOSITE
    return PRIME

def solution(numbers):
    answer = 0
    
    num_set = set() # 중복되는 숫자를 제거하기 위해 set 사용
    for n in range(1, len(numbers)+1) :
        for i in list(map(list, itertools.permutations(numbers, n))) :
            tmp = ''
            for j in range(len(i)) :
                tmp += i[j]
            num_set.add(int(tmp))
    print(num_set)

    for n in num_set :
        # 숫자가 0, 1인 경우 제외
        if n > 1 :
            if check_prime(n) == PRIME :
                answer += 1

    return answer

if __name__ == "__main__":
    numbers   = ["17", "011", "123"]
    answer    = [3   ,     2,     5]

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
테스트 1  〉	통과 (0.08ms, 10.4MB)
테스트 2  〉	통과 (3.42ms, 10.6MB)
테스트 3  〉	통과 (0.03ms, 10.4MB)
테스트 4  〉	통과 (1.55ms, 10.5MB)
테스트 5  〉	통과 (12.20ms, 10.8MB)
테스트 6  〉	통과 (0.03ms, 10.4MB)
테스트 7  〉	통과 (0.09ms, 10.4MB)
테스트 8  〉	통과 (11.87ms, 10.9MB)
테스트 9  〉	통과 (0.05ms, 10.4MB)
테스트 10 〉	통과 (6.31ms, 10.5MB)
테스트 11 〉	통과 (0.69ms, 10.4MB)
테스트 12 〉	통과 (0.32ms, 10.4MB)
소수 체크하는 반복문의 조건을 number의 제곱근+1 까지만 수행하는 것으로 수정했다.
https://endorphin0710.tistory.com/35

+ 쓸모없는 부분(한 자릿수 추가 하는 부분) 삭제
'''