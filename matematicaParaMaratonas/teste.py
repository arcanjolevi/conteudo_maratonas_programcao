
limite = 1300000


a = [0] * limite * 2

def clivo(n):
  a[1] = 1
  for x in range(2, limite*2):
    if(a[x] == 0):
      for j in range(2, limite*2):
        a[j*x] = 1



clivo(limite * limite)

for i in range(1, limite*2):
  if(a[i] == 0):
    print(i)
