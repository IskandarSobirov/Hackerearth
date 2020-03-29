cases = int(input())

for i in range(cases):
  x1,y1,x2,y2,v1,v2 = map(int,input().split())
  if(y1 < 0 and x2 > 0):
    time = (-y1/v1) + (y2/v2)
    print(('{0:.5f}'.format(time)))