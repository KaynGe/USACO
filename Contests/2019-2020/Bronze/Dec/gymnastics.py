import sys
sys.stdin = open('gymnastics.in', 'r')
sys.stdout = open('gymnastics.out', 'w')

k, n = map(int, input().split())
a = []
for i in range(k):
    a.append([int(i) for i in input().split()])

res = 0
for i in range(1, n+1):
    for j in range(i+1, n+1):
        cnt = 0
        for l in range(k):
            if a[l].index(i) < a[l].index(j):
                cnt += 1
        if cnt == k or cnt == 0: 
            res += 1
print(res)