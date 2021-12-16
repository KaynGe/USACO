import sys
sys.stdin = open("triangles.in", "r")
sys.stdout = open("triangles.out", "w")

n = int(input())
a = []
for i in range(n):
    a.append([int(i) for i in input().split()])
area = 0
for i in range(n):
    h, w = 0, 0
    for j in range(n):
        if a[i][0]==a[j][0]:
            h = max(h, abs(a[i][1]-a[j][1]))
        if a[i][1]==a[j][1]:
            w = max(w, abs(a[i][0]-a[j][0]))
    area = max(area, h * w)
print(area)