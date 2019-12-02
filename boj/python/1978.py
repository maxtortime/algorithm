# n = input()
# numbers = [int(number) for number in input().split(' ')]

# 0 - 1 ... 999: 1000
upper = 50
primes = [True for _ in range(upper)]

for i, is_prime in enumerate(primes):
    if i == 0:
        primes[i] = False
        continue

    if is_prime:
        for j in range(i*2, upper, i*2):
            print(j)
            primes[j] = False

for i, is_prime in enumerate(primes):
    print(i+1, is_prime)
