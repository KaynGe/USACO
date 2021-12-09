import sys
sys.stdin = open('whereami.in', 'r')
sys.stdout = open('whereami.out', 'w')
n = int(input())
s = input().strip()

for k in range(1, n + 1):
    flag = 1
    for i in range(n+1-k):
        for j in range(i):
            if s[i:i+k] == s[j:j+k]:
                flag = 0
                break
    if flag:
        print(k)
        break