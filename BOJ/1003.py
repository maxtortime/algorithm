scores = (int(input()) for _ in range(5))

scores = tuple(map(lambda x: 40 if x < 40 else x, scores))

print(sum(scores) // 5)
