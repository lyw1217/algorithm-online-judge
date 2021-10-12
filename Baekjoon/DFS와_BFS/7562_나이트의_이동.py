def knight() :
    result = 0
    l = int(input())    # 체스판의 한 변의 길이(체스판은 l x l 크기), 4 <= l <= 300
    cur = list(map(int, input().split(' ')))    # 현재 위치
    dest = list(map(int, input().split(' ')))   # 목표 위치

    '''
    이동할 수 있는 경우의 수
    -2 +1
    -2 -1
    -1 +2
    -1 +2
    +2 +1
    +2 -1
    +1 +2
    +1 -2
    '''


    return result

n = int(input())    # 테스트 케이스의 개수

for i in range(n) :
    print(knight())

