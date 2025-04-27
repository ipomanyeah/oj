t = int(input())
cbarray = [0] * 1000001
for i in range(1000001):
  cbarray[i] = i*i*i

def search(n):
  l = 0
  r = 1000000
  while (l <= r):
    m = int(l + (r - l) / 2)
    if cbarray[m] < n:
      l = m + 1;
    elif cbarray[m] > n:
      r = m - 1;
    else:
      return True
  return False

for i in range(t):
  n = int(input())
  if (search(n)):
    print("YES")
  else:
    print("NO")