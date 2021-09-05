n = []
for i in range(9) :
    n.append(int(input()))
'''
# 쉬운 방법
print(max(n))
print(n.index(max(n))+1)
'''
max = 0
index = 0
for i in range(len(n)) :
    if n[i] >= max :
        max = n[i]
        index = i + 1
print(max)
print(index)

'''
제출 번호	  아이디	문제	 결과	       메모리	 시간	언어	      코드 길이
33018688	lyw1217	2562	맞았습니다!!	29200	68	Python 3 / 수정	245	
33018192	lyw1217	2562	맞았습니다!!	29200	80	Python 3 / 수정	92		
'''