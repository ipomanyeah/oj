# :)))
n = int(input())
a = list(map(int,input().split()))
pf = [0] * (n + 1)
for i in range(n):
  pf[i + 1] = pf[i] + a[i]

for i in pf:
  if i != 0:
    print(i, end=' ')