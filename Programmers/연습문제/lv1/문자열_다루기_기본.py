def solution(s):
    if len(s) == 4 or len(s) == 6 :
        for i in s :
            print(ord(i))
            if ord(i) < 48 or ord(i) > 57 :
                return False
        return True
    return False

print(solution("a234"))
print(solution("1234"))