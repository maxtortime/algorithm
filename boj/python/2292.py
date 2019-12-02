# 1 7 19 37 61

N = int(input())

for n in range(1, 100000):
    if N <= n*3*(n-1)+1:
        break

print(n)