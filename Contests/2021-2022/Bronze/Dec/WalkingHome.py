t = int(input())

def solve():
    n, k = map(int, input().split())
    a = []
    for i in range(n):
        a.append(input())
    cnt = 0

    if k >= 1:
        dr, rd = 1, 1
        for i in range(n):
            if a[0][i]=='H' or a[i][n-1]=='H':
                rd = 0
            if a[i][0]=='H' or a[n-1][i]=='H':
                dr = 0
        cnt += dr + rd

    if k >= 2:
        for j in range(1, n-1):
            rdr = 1
            for i in range(n):
                if a[i][j]=='H': rdr=0
                if i<j and a[0][i]=='H': rdr=0 
                if i>j and a[n-1][i]=='H': rdr=0
            cnt += rdr
        for i in range(1, n-1):
            drd = 1
            for j in range(n):
                if a[i][j]=='H': drd=0
                if j<i and a[j][0]=='H': drd=0
                if j>i and a[j][n-1]=='H': drd=0
            cnt += drd
    
    if k >= 3:
        for i in range(1, n-1):
            for j in range(1, n-1):
                if a[i][j]=='H': continue
                rdrd = 1
                for l in range(n):
                    if l<=j and a[0][l]=='H': rdrd=0
                    if l<=i and a[l][j]=='H': rdrd=0
                    if l>=j and a[i][l]=='H': rdrd=0
                    if l>=i and a[l][n-1]=='H': rdrd=0
                cnt += rdrd
                drdr = 1
                for l in range(n):
                    if l<=i and a[l][0]=='H': drdr=0
                    if l<=j and a[i][l]=='H': drdr=0
                    if l>=i and a[l][j]=='H': drdr=0
                    if l>=j and a[n-1][l]=='H': drdr=0
                cnt += drdr
    print(cnt)

for i in range(t):
    solve()