# 1181번 - 단어 정렬
from sys import stdin
n = int(input())
words = []
for i in range(n) :
    words.append(stdin.readline())
words = sorted(set(words), key=lambda x : (len(x), x))
result = ''
for word in words :
    result += word
print(result)
