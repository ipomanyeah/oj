n = int(input())
sm = sum(list(map(int,list(str(n)))))
if n % sm == 0:
  print("YES")
else:
  print("NO")