# 0 또는 양의 정수가 주어졌을 때, 정수를 이어 붙여 만들 수 있는 가장 큰 수를 문자열로 반환
# numbers의 길이는 1 이상 100,000 이하
# 각 원소는 0 이상 1,000 이하
from functools import cmp_to_key
def solution(numbers) :
    answer = ''

    s_numbers = [ (str(s_num)) for s_num in numbers ]

    def compare(a, b) :
        if int(a + b) > int(b + a) :
            return 1
        else :
            return -1

    s_numbers = sorted(s_numbers, key=cmp_to_key(compare), reverse=True)

    answer = int(''.join(map(str, s_numbers)))
    return str(answer)

print(solution([6,10,2]))       # 6210
print(solution([3,30,34,5,9]))  # 9534330
print(solution([0,0]))          # 0
print(solution([21,212]))       # 21221

'''
테스트 1 〉	통과 (1190.06ms, 21.7MB)
테스트 2 〉	통과 (453.84ms, 16.5MB)
테스트 3 〉	통과 (1857.74ms, 25.3MB)
테스트 4 〉	통과 (13.06ms, 10.5MB)
테스트 5 〉	통과 (920.03ms, 20.3MB)
테스트 6 〉	통과 (810.14ms, 19MB)
테스트 7 〉	통과 (0.05ms, 10.5MB)
테스트 8 〉	통과 (0.04ms, 10.4MB)
테스트 9 〉	통과 (0.04ms, 10.4MB)
테스트 10 〉	통과 (0.04ms, 10.4MB)
테스트 11 〉	통과 (0.05ms, 10.4MB)
테스트 12 〉	통과 (0.03ms, 10.4MB)
테스트 13 〉	통과 (0.02ms, 10.4MB)
테스트 14 〉	통과 (0.03ms, 10.4MB)
테스트 15 〉	통과 (0.03ms, 10.4MB)
'''