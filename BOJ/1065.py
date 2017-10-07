def check_hansu(num):
    n = list(map(int, str(num)))

    if len(n) <= 2:
        return True

    d = n[1] - n[0]
    idx = 1

    while idx < len(n)-1:
        dn = n[idx+1]-n[idx]
        idx+=1

        if dn == d:
            d = dn
        else:
            return False

    return True


N = int(input())
result = 0

for i in range(1, N+1):
    if check_hansu(i):
        result +=1

print(result)

