'''
문제 설명
어떤 숫자에서 k개의 수를 제거했을 때 얻을 수 있는 가장 큰 숫자를 구하려 합니다.

예를 들어, 숫자 1924에서 수 두 개를 제거하면 [19, 12, 14, 92, 94, 24] 를 만들 수 있습니다. 이 중 가장 큰 숫자는 94 입니다.

문자열 형식으로 숫자 number와 제거할 수의 개수 k가 solution 함수의 매개변수로 주어집니다. number에서 k 개의 수를 제거했을 때 만들 수 있는 수 중 가장 큰 숫자를 문자열 형태로 return 하도록 solution 함수를 완성하세요.

제한 조건
number는 1자리 이상, 1,000,000자리 이하인 숫자입니다.
k는 1 이상 number의 자릿수 미만인 자연수입니다.
'''

'''
만약 뒤 숫자가 앞 숫자보다 크면 앞 숫자를 버려
버렸으면 처음부터 다시 탐색
'''

def solution(number, k):
    #number  = list(map(int, number))
    idx     = 1
    while True :
        if number[idx] > number[idx-1] :
            k  -= 1
            #del number[idx-1]
            number = number[:idx-1] + number[idx:]
            idx = 1
            if k == 0 :
                break
            continue
        idx += 1
        if idx > len(number) :
            idx = 1

    #return "".join(map(str, number))
    return "" + number

if __name__ == "__main__":
    number   = ["1924", "1231234", "4177252841"]
    k        = [     2,         3,            4]
    answer   = [  "94",    "3234",     "775841"]
    # "ABAAAAAAAAABB", 11번 테스트 케이스, 답 : 7
    for i in range(len(number)) :
        result = solution(number[i], k[i])
        print( 'result = ' , result)
        if result == answer[i] :
            print( 'SUCCESS' )
        else :
            print( 'FAIL' )

'''
테스트 1  〉	통과 (0.01ms, 10.2MB)
테스트 2  〉	통과 (0.01ms, 10.3MB)
테스트 3  〉	통과 (0.06ms, 10.2MB)
테스트 4  〉	통과 (0.36ms, 10.2MB)
테스트 5  〉	통과 (1.68ms, 10.2MB)
테스트 6  〉	통과 (655.63ms, 10.3MB)
테스트 7  〉	통과 (1441.64ms, 10.4MB)
테스트 8  〉	실패 (시간 초과)
테스트 9  〉	통과 (10.11ms, 11.8MB)
테스트 10 〉	실패 (시간 초과)
테스트 11 〉	통과 (0.00ms, 10.1MB)
테스트 12 〉	실패 (런타임 에러)

몇몇 테스트에서 시간이 조금 단축되긴 했지만
아직도 해결안된 테스트는 그대로
'''