# https://www.acmicpc.net/problem/1009
for _ in range(int(input())):
    a, b = [int(each) for each in input().split(' ')]
    res = 1

    for _ in range(b):
        res = res * a % 10
    
    if res == 0:
        res = 10
    
    print(res)

