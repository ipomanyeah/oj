s = input().split()
mp = {}
mx = 0
for i in range(len(s)):
  mx = max(mx, len(s[i]))
d = []
for i in range(len(s)):
  if len(s[i]) == mx:
    d.append(s[i])

for i in range(len(d)):
  print(d[i])