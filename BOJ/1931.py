import sys
try:
    if sys.argv[1]:
        meets = [(1,4),(3,5),(0,6),(5,7),(3,8),(5,9),(6,10),(8,11),(8,12),(2,13),(12,14)]
except IndexError:
    n = input()
    meets = [tuple(map(int, raw_input().split())) for i in range(n)]

MAX = 0

for i in range(len(sorted(meets))):
    for j in range(len(sorted(meets[idx:]))):
        end = meets[i][1]
        start = meets[i+j][0]

        if end > start:
            continue
        elif end <= start+1:
            MAX+=1


print(meet)

