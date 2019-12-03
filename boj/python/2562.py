import math
import sys
max_number = -math.inf
max_index = 1

for n in range(1, 10):
  number = int(sys.stdin.readline())

  if number > max_number:
    max_number = number
    max_index = n


print(max_number)
print(max_index)
