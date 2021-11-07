# 10825번 - 국영수

# n명의 학생
# 국어 점수가 감소하는 순서
# 국어 점수가 같으면 영어 점수가 증가하는 순서
# 국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서
# 모든 점수가 같으면 이름이 사전 순으로 증가하는 순서(아스키코드)
from sys import stdin
n = int(stdin.readline())
students = []
for _ in range(n) :
    data = list(map(str, stdin.readline().split(' ')))
    name = data[0]
    kor = int(data[1])
    eng = int(data[2])
    mat = int(data[3])

    students.append([name, kor, eng, mat])

students.sort(key=lambda x: (-int(x[1]), int(x[2]), int(-x[3]), x[0]))

result = ''
for s in students :
    result += f'{s[0]}\n'
print(result)