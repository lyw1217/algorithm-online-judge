# 3052번 - 나머지

num = list()
input_num = dict()
result = dict()
for i in range(10) :
    input_num[i] = int(input()) % 42

    for key, val in input_num.items() :
        if val not in num :
            num.append(val)
            result[key] = val

print(len(result))