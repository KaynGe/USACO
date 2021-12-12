import sys
sys.stdin = open("word.in", "r")
sys.stdout = open("word.out", "w")

n, k = map(int, input().split())
a = input().split()
print(a[0], end = '')
cnt = len(a[0])
for i in range(1, n):
    if cnt + len(a[i]) <= k:
        print(' ' + a[i], end = '')
        cnt += len(a[i])
    else:
        print('\n' + a[i], end = '')
        cnt = len(a[i])