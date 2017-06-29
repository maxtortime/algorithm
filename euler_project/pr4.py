#!/usr/bin/env python
def reverse_int(n):
    return int(str(n)[::-1])

def split_half_int(n,i):
    n_str = str(n)

    if i == 1:
        return int(n_str[int(len(n_str)/2):])
    else:
        return int(n_str[:int(len(n_str)/2)])

parlinums = []

for i in range(100,1000):
    for j in range(100,1000):
        if reverse_int(split_half_int(i*j,1)) == split_half_int(i*j,0):
            parlinums.append(i * j)

print (max(parlinums))

exit()

