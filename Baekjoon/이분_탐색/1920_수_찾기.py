# N 개의 정수 중 X 라는 정수가 존재하는지?
# 1 <= N, M <= 100,000
# M 개의 수 들이 A 안에 존재하는지?
# M 개의 줄에 답을 출력, 존재하면 1, 존재하지 않으면 0

n = int(input())
num = sorted(list(map(int, input().split(' '))))
m = int(input())
x_num = list(map(int, input().split(' ')))

def binary_search(array, target, start, end) :
    if start > end :
        return None
    mid = (start + end) // 2
    if array[mid] == target :
        return mid
    elif array[mid] > target :
        return binary_search(array, target, start, mid - 1)
    else : 
        return binary_search(array, target, mid + 1, end)

result = ''
for i in x_num :
    if binary_search(num, i, 0, len(num)-1) != None :
        result += '1\n'
    else :
        result += '0\n'
print(result)