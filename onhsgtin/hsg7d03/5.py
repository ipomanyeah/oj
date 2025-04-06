n = int(input())
prev = 0
curr = 1
for i in range(n - 1):
  prev, curr = curr, curr + prev

print(prev)