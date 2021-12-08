# 2630번 - 색종이 만들기

N = int(input())

paper = [ list(map(int, input().split(' '))) for _ in range(N) ]

w_count = 0
b_count = 0

def FindPaper(x, y, n, p) :
    global w_count
    global b_count

    check = p[x][y]

    for i in range(x, x+n) :
        for j in range(y, y+n) :
            if p[i][j] != check :
                FindPaper(x     , y     , n//2, p)   # 1/4
                FindPaper(x+n//2, y     , n//2, p)   # 2/4
                FindPaper(x     , y+n//2, n//2, p)   # 3/4
                FindPaper(x+n//2, y+n//2, n//2, p)   # 4/4
                return
    if check == 0 :
        w_count += 1
        return
    else :
        b_count += 1
        return

FindPaper(0, 0, N, paper)
print(w_count)
print(b_count)