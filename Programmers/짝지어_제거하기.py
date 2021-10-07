def solution(s):
    answer = -1
    i = 1
    s = list(s)
    flag = 0
    while True :
        s_len = len(s)
        if i >= s_len :
            if flag == 1 :
                i = 1
                flag = 0
                continue
            else :
                if s_len == 0 :
                    answer = 1
                else :
                    answer = 0
                break

        if s_len > 1 and s[i] == s[i-1] :
            print('s[i] = {} s[i-1] = {}'.format(s[i], s[i-1]))
            del s[i-1]
            print('s[i] = {} s[i-1] = {}'.format(s[i], s[i-1]))
            del s[i-1]
            print("")
            i -= 1
            if i < 0 : i = 0
            flag = 1
        else : 
            i += 1

    return answer

print(solution("baabaa"))
print(solution("cdcd"))
print(solution("aaaaaaaaaaaaaaa"))