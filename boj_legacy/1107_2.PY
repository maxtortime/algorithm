N = int(input())
M = int(input())

broken = [False for _ in range(10)]
binput = input().split(' ')

for b in binput:
    broken[int(b)] = True

R = abs(N-100)

def possible(C):
    if C == 0:
        return False if broken[0] else True

    length = 0

    while C != 0:
        if broken[C % 10]:
            return False

        C //= 10
        length+=1

    return length


for c in range(0,1000000):
    is_broken = possible(c)

    if is_broken:
        temp = abs(c-N)+is_broken

        if temp < R:
            R = temp

print(R)

