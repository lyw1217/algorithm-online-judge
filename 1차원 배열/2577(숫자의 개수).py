# 2577번 - 숫자의 개수

num = 1
for i in range(3) :
    num *= int(input())

s_num = str(num)
line = [0,0,0,0,0,0,0,0,0,0]
for i in range(len(s_num)) :
    n = int(s_num[i])
    if n == 0 :
        line[0] += 1
    elif n == 1 :
        line[1] += 1
    elif n == 2 :
        line[2] += 1
    elif n == 3 :
        line[3] += 1
    elif n == 4 :
        line[4] += 1
    elif n == 5 :
        line[5] += 1
    elif n == 6 :
        line[6] += 1
    elif n == 7 :
        line[7] += 1
    elif n == 8 :
        line[8] += 1
    elif n == 9 :
        line[9] += 1

for i in line :
    print(i)
