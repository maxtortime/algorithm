N = int(input())
M = int(input())
ct1 = ct2 = ''

B = [True for _ in range(10)]
broken = input().split(' ')

for b in broken:
    B[int(b)] = False

R1 = abs(N - 100)
R2 = 0
R3 = 0

for d in str(N):
    int_d = int(d)

    if B[int_d]:
        ct1 += d
        ct2 += d
        R2 += 1
        R3 += 1
    else:
        for i in range(int_d, -1, -1):
            if B[i]:
                ct1 += str(i)
                R2 += 1
                break

        for i in range(int_d, 10):
            if B[i]:
                ct2 += str(i)
                R3 += 1
                break

print(ct1, ct2)
if ct1:
    R2 += abs(N-int(ct1))

if ct2:
    R3 += abs(N-int(ct2))

print(min(R1, R2, R3))

