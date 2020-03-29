cases = int(input())
res = 0  
n = 0

for j in range(cases):
    print(j)
    num = int(input())
    
    for i in range(1,32):
      n = pow(2,i)-1
      if n <= num:
        res = n
print(res)
           