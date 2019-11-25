adds = []

for _ in range(int(input())):
    A, B = map(int, str(input()).split(' '))
    adds.append((A, B, A+B))

for idx, add in enumerate(adds):
    print("Case #{0}: {1} + {2} = {3}".format(idx+1, *add))

