N = input()
P = map(int, raw_input().split())
assert len(P) == N

times = [0 for _ in range(N)]

for idx, time in enumerate(sorted(P)):
    if idx == 0:
        times[idx] += time
    else:
        times[idx] += times[idx-1] + time

print(sum(times))

