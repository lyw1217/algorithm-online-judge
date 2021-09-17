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
2. 왼쪽으로 쭉 이동하는 비용 = len(name) (만약 나머지가 전부 A라면, 전체 count에서 'A'이동 count 뺴기)

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

    #print('name = ', name)

    for idx in name :
        #print(idx)
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
    namelist = list(name)
    n = len(namelist)
    change = []
    index = []

    for i, v in enumerate(namelist):
        if v != 'A' :
            change.append(v)
            if i != 0 :
                index.append(i)

    # 1. 오른쪽으로만 이동하는 비용
    right = max(index)

    # 2. 왼쪽으로만 이동하는 비용
    left = n - min(index)

    # 3. 오른쪽으로 가다가 왼쪽으로 이동하는 비용
    rightleft = max(right, left)

    for i in range(len(index)-1):
        temp = 2 * index[i] + (n-index[i+1])
        rightleft = (temp if temp < rightleft else rightleft)
    

    return alpha_count + min(right, left, rightleft)  # 비용들 중 최소비용을 더함
    '''
    # 1. 오른쪽으로 쭉 이동하는 비용 = len(name)-1 (만약 나머지가 전부 A라면, 전체 count에서 'A'이동 count 뺴기)
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
    
    a_count = 0
    flag    = 0

    # 2. 왼쪽으로 쭉 이동하는 비용 = len(name)-1 (만약 나머지가 전부 A라면, 전체 count에서 'A'이동 count 뺴기)
    for i in range(len(name)) :
        if name[-i] == 'A' :
            a_count += 1
            flag     = 0
        else :
            a_count  = 0
            flag     = 1
    
    if flag == 0 :
        cursor_count.append(len(name)-1 - a_count)
    else :
        cursor_count.append(len(name)-1)
    
    # 3. 오른쪽으로 이동 중 'A'가 나오면 뒤로 back해서 [다시 A가 나올때까지 or i+1인덱스까지]
    for i in range(1,len(name)-1,1) :
        if (name[i] == 'A') and (i <= (len(name) // 2)) :
            back_count = 0
            # 뒤로 back
            for j in range(len(name)-1, i , -1) :
                if j == len(name)-1 and name[j] == 'A' :
                    back_count += 1
                    continue
                print('len(name)-1 = ', len(name)-1)
                print('name[{}] = {}'.format(j, name[j]))
                back_count += 1
                print(back_count)
                if name[j] == 'A' or j == -(i-2) :
                    if ((i - 1) + (i - 1) + (back_count - 1)) > 0 :
                        cursor_count.append((i - 1) + (i - 1) + (back_count - 1))
                        print('i-1({}) + i-1({}) + back_count-1({}) = {}'.format(i-1, i-1, back_count-1, i + (i-1) + (back_count-1)))
                    break
            break
    print('alpha_count = ' , alpha_count)
    print('cursor_count = ' , cursor_count)
    return alpha_count + min(cursor_count)  # 비용들 중 최소비용을 더함
    '''

if __name__ == "__main__":
    name   = ["JAZ", "JEROEN", "JAN", "ABAAAAAAAAABB", "ZAAAZZZZZZZ", "BBAAAABA"]
    answer = [   11,       56,    23,               7,            15,          7]
    # "ABAAAAAAAAABB", 11번 테스트 케이스, 답 : 7
    for i in range(len(name)) :
        result = solution(name[i])
        print( 'result = ' , result)
        if result == answer[i] :
            print( 'SUCCESS' )
        else :
            print( 'FAIL' )


'''
테스트 1 〉	통과 (0.01ms, 10.2MB)
테스트 2 〉	통과 (0.02ms, 10.2MB)
테스트 3 〉	통과 (0.01ms, 10.3MB)
테스트 4 〉	통과 (0.02ms, 10.2MB)
테스트 5 〉	통과 (0.02ms, 10.3MB)
테스트 6 〉	통과 (0.01ms, 10.3MB)
테스트 7 〉	통과 (0.02ms, 10.4MB)
테스트 8 〉	통과 (0.01ms, 10.3MB)
테스트 9 〉	통과 (0.01ms, 10.3MB)
테스트 10 〉	통과 (0.01ms, 10.3MB)
테스트 11 〉	통과 (0.01ms, 10.3MB)

참고 자료
https://velog.io/@imyo/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-%ED%83%90%EC%9A%95%EB%B2%95Greedy-%EC%A1%B0%EC%9D%B4%EC%8A%A4%ED%8B%B1-Level-2

...이건 좀
'''
