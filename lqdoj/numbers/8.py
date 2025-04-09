mod = 1000000007
s = input().split()
a = int(s[0])
b = int(s[1])

sum = 0
for i in range(a, b + 1):
  si = '1' * i
  sum = (sum + (int(si) % mod)) % mod

print(sum)