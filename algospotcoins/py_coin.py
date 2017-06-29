#!/usr/local/bin/python3
import sys, math
n_test_case = int(input())
n_res = [0 for x in range(n_test_case)]

MAX_COINS = 5000
MAX_COUNT = 1000000007

for i in range(n_test_case):
    money, n_coin = [int(x) for x in input().split()]
    coins = [int(x) for x in input().split()]
    countCoins = [long(0) for x in range(MAX_COINS)]

    coins.sort()

    for coin in coins:
        if coin > money:
            break

        countCoins[coin] += 1
        j = 1

        while coin + j <= money:
            j += 1
            if countCoins[j] >= 0:
                countCoins[j + coin] += countCoins[j]

    if countCoins[money] >= MAX_COUNT:
        n_res[i] = countCoins[money] % MAX_COUNT
    else:
        n_res[i] = countCoins[money]

for n in n_res:
    print(n)


