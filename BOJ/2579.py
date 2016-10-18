n = input()
S = [input() for _ in range(n)]
maxs = [0 for _ in range(n)]

maxs[0] = S[0]
maxs[1] = S[0] + S[1]

if S[0] > S[1]:
    maxs[2] = S[0] + S[2]
else:
    maxs[2] = S[1] + S[2]

for i in range(3,n):
    maxs[i] += S[i]

    if S[i] + S[i-1] + maxs[i-3] > maxs[i-2] + S[i]:
        maxs[i] += S[i-1] + maxs[i-3]
    else:
        maxs[i] += maxs[i-2]

print(maxs[-1])
