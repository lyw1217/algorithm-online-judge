'''
문제 설명
조이스틱으로 알파벳 이름을 완성하세요. 맨 처음엔 A로만 이루어져 있습니다.
ex) 완성해야 하는 이름이 세 글자면 AAA, 네 글자면 AAAA

조이스틱을 각 방향으로 움직이면 아래와 같습니다.

▲ - 다음 알파벳
▼ - 이전 알파벳 (A에서 아래쪽으로 이동하면 Z로)
◀ - 커서를 왼쪽으로 이동 (첫 번째 위치에서 왼쪽으로 이동하면 마지막 문자에 커서)
▶ - 커서를 오른쪽으로 이동
예를 들어 아래의 방법으로 "JAZ"를 만들 수 있습니다.

- 첫 번째 위치에서 조이스틱을 위로 9번 조작하여 J를 완성합니다.
- 조이스틱을 왼쪽으로 1번 조작하여 커서를 마지막 문자 위치로 이동시킵니다.
- 마지막 위치에서 조이스틱을 아래로 1번 조작하여 Z를 완성합니다.
따라서 11번 이동시켜 "JAZ"를 만들 수 있고, 이때가 최소 이동입니다.
만들고자 하는 이름 name이 매개변수로 주어질 때, 이름에 대해 조이스틱 조작 횟수의 최솟값을 return 하도록 solution 함수를 만드세요.

제한 사항
name은 알파벳 대문자로만 이루어져 있습니다.
name의 길이는 1 이상 20 이하입니다.
'''

'''
이름의 각 알파벳을 상하 방향키로 움직여야 하는 갯수 먼저 세고

좌우 방향키로 커서를 최소로 이동하는 방법
1. 오른쪽으로 쭉 이동하는 비용 = len(name) (만약 나머지가 전부 A라면, 전체 count에서 'A'이동 count 뺴기)
2. A가 나올 때까지 커서를 오른쪽으로 이동하고 반대 방향으로 다시 되돌아가는 비용
3. 왼쪽으로 쭉 이동하는 비용 = len(name) (만약 나머지가 전부 A라면, 전체 count에서 'A'이동 count 뺴기)
4. A가 나올 때까지 커서를 왼쪽으로 이동하고 반대 방향으로 다시 되돌아가는 비용
'''

#           0     1    2    3    4    5    6    7    8    9    10   11   12  13   14   15   16   17   18   19   20   21   22   23   24   25  
alphabet = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

def solution(name) :
    alpha_count     = 0
    cursor_count    = []
    alpha_len       = len(alphabet)
    half            = len(alphabet) // 2
    flag            = 0 # A가 아닌 값이 나왔을 때 1
    a_count         = 0 # A인 곳을 지나가는 count

    print('name = ', name)

    for idx in name :
        print(idx)
        ''' 상하 방향키 '''
        # 알파벳 전체의 절반보다 앞쪽에 있으면 그대로
        if alphabet.index(idx) <= half :
            if idx == 'A' :
                continue
            alpha_count += alphabet.index(idx)
        # 알파벳 전체의 절반보다 뒤쪽에 있으면 뒤에서부터
        else :
            alpha_count += abs(alphabet.index(idx) - alpha_len)

    ''' 좌우 방향키 '''
    # 1. 오른쪽으로 쭉 이동하는 비용 = len(name) (만약 나머지가 전부 A라면, 전체 count에서 'A'이동 count 뺴기)
    for i in range(len(name)) :
        if name[i] == 'A' :
            a_count += 1
            flag     = 0
        else :
            a_count  = 0
            flag     = 1
    
    if flag == 0 :
        cursor_count.append(len(name)-1 - a_count)
    else :
        cursor_count.append(len(name)-1)

    # 2. A가 나올 때까지 커서를 오른쪽으로 이동하고 반대 방향으로 다시 되돌아가는 비용
    # A가 하나 나오면 무조건 반대 방향으로 되돌아가버림
    #for idx in name :
    #    if idx == 'A' :

    # 3. 왼쪽으로 쭉 이동하는 비용 = len(name) (만약 나머지가 전부 A라면, 전체 count에서 'A'이동 count 뺴기)
    for i in range(len(name)) :
        if name[-i] == 'A' :
            a_count += 1
            flag     = 0
        else :
            a_count  = 0
            flag     = 1
        print('name[{}] = {} '.format(-i,name[-i]))
    
    if flag == 0 :
        cursor_count.append(len(name)-1 - a_count)
    else :
        cursor_count.append(len(name)-1)
    

    # 4. A가 나올 때까지 커서를 왼쪽으로 이동하고 반대 방향으로 다시 되돌아가는 비용
    #for idx in reversed(name) :
    #    if idx == 'A' :

    return alpha_count + min(cursor_count)

if __name__ == "__main__":
    name = ["JAZ", "JEROEN", "JAN"]
    result = 0
    for i in range(len(name)) :
        result = solution(name[i])
        print( 'result = ' , result)
        if i == 0 :
            if result == 11 :
                print( 'SUCCESS' )
            else :
                print( 'FAIL' )
        elif i == 1 :
            if result == 56 :
                print( 'SUCCESS' )
            else :
                print( 'FAIL' )
        elif i == 2 :
            if result == 23 :
                print( 'SUCCESS' )
            else :
                print( 'FAIL' )


'''
테스트 1 〉	통과 (0.01ms, 10.2MB)
테스트 2 〉	통과 (0.02ms, 10.3MB)
테스트 3 〉	통과 (0.01ms, 10.3MB)
테스트 4 〉	통과 (0.03ms, 10.3MB)
테스트 5 〉	통과 (0.03ms, 10.3MB)
테스트 6 〉	통과 (0.02ms, 10.3MB)
테스트 7 〉	통과 (0.02ms, 10.2MB)
테스트 8 〉	통과 (0.02ms, 10.2MB)
테스트 9 〉	통과 (0.02ms, 10.1MB)
테스트 10 〉	통과 (0.02ms, 10.3MB)
테스트 11 〉	실패 (0.02ms, 10.2MB)

한쪽 방향으로만 처리하게 해도 테스트 11만 실패한다.
테스트를 다양하게 하지는 않는 것 같다.
'''
