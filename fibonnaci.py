def fibonacci(n):
  a,b = 0,1
  for i in range(0,n):
    print a
    a,b, = b,a+b

