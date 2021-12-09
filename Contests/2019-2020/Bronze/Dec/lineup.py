import sys
from itertools import permutations
sys.stdin = open('lineup.in', 'r')
sys.stdout = open('lineup.out', 'w')

n = int(input())
a, b = [], []
for i in range(n):
    t = input().split()
    a.append(t[0])
    b.append(t[-1])

def isBeside(a, b, cow):
    return abs(cow.index(a) - cow.index(b)) == 1

cows = ['Bessie','Buttercup','Belinda','Beatrice','Bella','Blue','Betsy','Sue']
cows.sort()
for cow in permutations(cows):
    flag = 1
    for i in range(n):
        if not isBeside(a[i], b[i], cow):
            flag = 0
            break
    if flag:
        for i in cow:
            print(i) 
        break