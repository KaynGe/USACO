import sys
sys.stdin = open("swap.in", "r")
sys.stdout = open("swap.out", "w")

n, k = map(int, input().split())
a1, a2 = map(int, input().split())
b1, b2 = map(int, input().split())
a = [i for i in range(n+1)]
b = [0] * (n+1)

def solve(p):
    loop = 0
    cur = p
    while 1:
        if a1<=cur<=a2:
            cur = (a1+a2) - cur
        if b1<=cur<=b2:
            cur = (b1+b2) - cur
        loop += 1
        if cur==p: break
    for i in range(k % loop):
        if a1<=cur<=a2:
            cur = (a1+a2) - cur
        if b1<=cur<=b2:
            cur = (b1+b2) - cur
    return cur


for i in range(1, n+1):
    b[solve(i)] = i
for i in range(1, n+1):
    print(b[i])