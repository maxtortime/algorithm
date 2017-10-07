N = int(input())
results = [str(input()) for _ in range(N)]

# N = 5
# results = ['OOXXOXXOOO', 'OOXXOOXXOO', 'OXOXOXOXOXOXOX', 'OOOOOOOOOO', 'OOOOXOOOOXOOOOX']
scores = [0 for _ in range(N)]


for idx, result in enumerate(results):
    count = 0

    for sol in result:
        if sol == 'O':
            count += 1
            scores[idx] += count
        elif sol == 'X':
            count = 0

for score in scores:
    print(score)

# print(scores)
# assert(scores == [10, 9, 7, 55, 30])
