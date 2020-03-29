cases = int(input())

for i in range(cases):
  size = int(input()) 
  #val = []
  val = [[int(x) for x in list(input())], [int(x) for x in list(input())]]

  down = 0
  no = 0

  for i in range(size):
    if(val[down][i] > 2 and val[down ^1][i] <= 2):
      no = 1
      break 
    if(val[down][i] > 2): down ^= 1 

  print("NO" if no == 1 or down == 0 else "YES") 


