n = int(input())
p = [int(i) for i in input().split()]
t = [int(i) for i in input().split()]
d = [0] + [p[i]-t[i] for i in range(n)] + [0]
cnt = 0
for i in range(n+1):
    cnt += abs(d[i]-d[i+1])
print(cnt // 2)