# 1316번 - 그룹 단어 체커
n = int(input())
result = n
for i in range(n) :
    word = input()
    for w in range(len(word)-1) :
        if word[w] != word[w+1] :
            if word[w] in word[w+1:] :
                result -= 1
                break
print(result)