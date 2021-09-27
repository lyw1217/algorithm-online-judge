# 1065번 - 한수

n = int(input())
result = 0
for i in range(1, n+1) :
    if len(str(i)) <= 2 :
        result += 1
    # 자릿수가 1, 2인 경우 무조건 등차수열
    else :
        num = str(i)
        if int(num[0]) - int(num[1]) == int(num[1]) - int(num[2]) :
            result += 1

print(result)
