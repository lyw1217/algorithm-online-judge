n , m = input().split(' ')
m = int(m)
x = input().split(' ')
result=''
for i in x :
    if int(i) < m :
        result = result + str(i)+' '
print(result)
