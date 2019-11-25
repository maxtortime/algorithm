import sys
n = int(input())

S = [int(input()) for _ in range(n)]

if len(S) == 0:
    print(0)
    exit()
elif len(S) == 1:
    print(S[0])
    exit()

climbs = [
            [S[0]],
            [S[1],S[0]+S[1]]
        ]

S[1] += S[0]

for idx, num in enumerate(S[2:]):
    idx+=2
    bef_climbs = climbs[idx-1]
    bef2_climbs = climbs[idx-2]

    if idx >=4:
        climbs[idx-3] = None
        climbs[idx-4] = None
        S[idx-2] = None

    climbs.append([])
    MAX = -sys.maxint-1

    for climb in bef_climbs:
        if climb == S[idx-1]:
            continue
        else:
            temp = S[idx]+climb

            if temp > MAX:
                MAX = temp
            climbs[idx].append(temp)

    for climb in bef2_climbs:
        temp = S[idx]+climb
        if MAX < temp:
            MAX = temp

        climbs[idx].append(temp)

    S[idx] = MAX

print(S[-1])