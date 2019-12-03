# 1을 걸려면 2초 필요
# 2부터 1초씩 늘어남
# UNUCIC
# 9+7+9+3+5+3=36
import sys

dials = {
  'A': 3, "B": 3, "C": 3,
  'D': 4,'E': 4, 'F': 4,
  'G': 5,'H': 5, 'I': 5,
  'J': 6,'K': 6, 'L': 6,
  'M': 7,'N': 7, 'O': 7,
  'P': 8,'Q': 8, 'R': 8, 'S': 8,
  'T': 9,'U': 9, 'V': 9,
  'W': 10,'X': 10, 'Y': 10, 'Z': 10, '\n': 0
}

print(sum([dials[c] for c in sys.stdin.readline()]))
