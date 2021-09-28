# 5622번 - 다이얼
word = input()
dial = [['A', 'B', 'C'], ['D', 'E', 'F'], ['G', 'H', 'I'], ['J', 'K', 'L'], ['M', 'N', 'O'], ['P', 'Q', 'R', 'S'], ['T', 'U', 'V'], ['W', 'X', 'Y', 'Z']]
result = 0
for i in word :
    for idx, j in enumerate(dial) :
        if i in j :
            result += (3  if (idx == 0) else 
                       4  if (idx == 1) else
                       5  if (idx == 2) else
                       6  if (idx == 3) else
                       7  if (idx == 4) else
                       8  if (idx == 5) else
                       9  if (idx == 6) else
                       10 if (idx == 7) else 0)
            break
print(result)