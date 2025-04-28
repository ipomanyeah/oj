n = int(input())
s = 0
mod = 2004010501
temp = input()
for i in range(n):
  inp = input().split()
  op = inp[0]
  x = int(inp[1])
  if op == '-':
    s = ((s % mod) - (x % mod)) % mod
  else:
    s = ((s % mod) + (x % mod)) % mod
print(s)
