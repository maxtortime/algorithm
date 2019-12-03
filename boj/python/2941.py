import sys

word = sys.stdin.readline().rstrip('\n')
cur = 0
res = 0

while cur < len(word):
  semi = word[cur:cur+3]
  if semi == 'dz=':
    cur += 3
  elif semi[:2] in ('c=', 'c-', 'd-', 'lj', 'nj', 's=', 'z='):
    cur += 2
  else:
    cur += 1

  res += 1

print(res)