n = int(input())
s = input()
cnt = 0
for i in range(n):
    l = 0
    if i>0 and s[i]!=s[i-1]:
        l += 1
        for j in range(i-2, -1, -1):
            if s[j]!=s[i]: l += 1
            else: break
    r = 0
    if i<n-1 and s[i]!=s[i+1]:
        r += 1
        for j in range(i+2, n):
            if s[j]!=s[i]: r += 1
            else: break
    cnt += l*r + max(l-1, 0) + max(r-1, 0)
print(cnt)