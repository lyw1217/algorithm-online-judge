def solution(s):
    if len(s) % 2 != 0 :
        return 0
    answer = -1
    
    stack = [s[0]]

    for i in s[1:] :
        if len(stack) > 0 and stack[-1] == i :
            stack.pop()
        else :
            stack.append(i)
    if len(stack) == 0 :
        answer = 1
    else :
        answer = 0
    return answer

print(solution("baabaa"))
print(solution("cdcd"))
print(solution("aaaaaaaaaaaaaaa"))