# 0 또는 양의 정수가 주어졌을 때, 정수를 이어 붙여 만들 수 있는 가장 큰 수를 문자열로 반환
# numbers의 길이는 1 이상 100,000 이하
# 각 원소는 0 이상 1,000 이하
from itertools import permutations
def solution(numbers) :
    answer = ''

    s_numbers = [ (str(s_num)) for s_num in numbers ]
    
    perm = list(permutations(numbers))
    max = 0
    for p in perm :
        num =int(''.join(list(map(str, list(p)))))
        if max < num :
            max = num
    answer = str(max)
    return answer

print(solution([6,10,2]))       # 6210
print(solution([3,30,34,5,9]))  # 9534330
print(solution([0,0]))          # 0
print(solution([21,212]))       # 21221

'''
테스트 1 〉	실패 (시간 초과)
테스트 2 〉	실패 (시간 초과)
테스트 3 〉	실패 (시간 초과)
테스트 4 〉	실패 (시간 초과)
테스트 5 〉	실패 (시간 초과)
테스트 6 〉	실패 (시간 초과)
테스트 7 〉	실패 (시간 초과)
테스트 8 〉	실패 (시간 초과)
테스트 9 〉	실패 (시간 초과)
테스트 10 〉	실패 (시간 초과)
테스트 11 〉	실패 (시간 초과)
테스트 12 〉	통과 (0.02ms, 10.4MB)
테스트 13 〉	통과 (0.02ms, 10.4MB)
테스트 14 〉	통과 (8.28ms, 10.7MB)
테스트 15 〉	통과 (0.03ms, 10.4MB)
'''