import sys
sys.stdin = open("breedflip.in", "r")
sys.stdout = open("breedflip.out", "w")

n = int(input())
a = input()
b = input()
flag = 1
cnt = 0
for i in range(n):
    if a[i] != b[i] and flag:
        cnt += 1
        flag = 0
    elif a[i] == b[i]:
        flag = 1
print(cnt)