import sys
sys.stdin = open("photo.in", "r")
sys.stdout = open("photo.out", "w")

n = int(input())
b = [0] + [int(i) for i in input().split()]
for i in range(1, n+1):
    a = [0] * n
    a[0] = i
    flag = 1
    for j in range(1, n):
        a[j] = b[j] - a[j-1]
        if a[j]<1 or a.count(j)>1:
            flag = 0
            break
    if flag:
        for j in range(n-1):
            print(a[j], end = ' ')
        print(a[n-1])
        break