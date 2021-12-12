import sys
sys.stdin = open("race.in", "r")
sys.stdout = open("race.out", "w")

k, n = map(int, input().split())

def solve(lim):
    time, dist = 0, 0
    cur = 1
    for cur in range(1, k):
        dist += cur
        time += 1
        if dist >= k:
            return time
        if cur >= lim:
            dist += cur
            time += 1
            if dist >= k:
                return time

for i in range(n):
    print(solve(int(input())))