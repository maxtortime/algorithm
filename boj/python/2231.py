N = int(input())

i = 0
s = 0

def d(n):
    res = n

    while n != 0:
        res += n % 10
        n //= 10
    
    return res

for a in range(1, N+1):
    if N == d(a):
        i = a
        break

print(i, end='')
