def solution(s, n):
    answer = ''
    s = list(s)
    idx = 0
    for i in s :
        asc_i = ord(i)
        print(f'i = {i}, asc_i = {asc_i}')
        if asc_i == 32 :    # 공백은 skip
            idx += 1
            continue
        for j in range(n) :
            if 97 <= asc_i <= 122 :
                asc_i += 1
                if asc_i > 122 :    # z
                    asc_i = 97      # a
            elif 65 <= asc_i <= 90 :
                asc_i += 1
                if asc_i > 90 :     # Z
                    asc_i = 65      # A
        s[idx] = chr(asc_i)
        idx += 1
    answer = ''.join(s)
    return answer

print(solution("AB", 1))
print('')
print(solution("z", 1))
print('')
print(solution("a B z", 4))