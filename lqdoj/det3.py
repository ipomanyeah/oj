a, b, c = list(map(int,input().split()))
d, e, f = list(map(int,input().split()))
g, h, i = list(map(int,input().split()))
s = ((a * e * i) + (b * f * g) + (c * d * h) - (a * f * h) - (b * d * i) - (c * e * g)) % 2004010501
print(s)