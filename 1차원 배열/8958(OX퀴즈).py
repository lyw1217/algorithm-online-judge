def sum_score(score) :
    sum = 0
    for j in range(score) :
        sum += (j+1)
    return sum

n = int(input())

for i in range(n):
    index = 0
    score = 0
    sum   = 0
    case  = input()

    for s in case :
        index += 1
        if s == 'O' :
            score += 1
            if index == len(case) :
                sum += sum_score(score)  
        elif s == 'X' :
            sum += sum_score(score)
            score = 0

    print(sum)