from collections import deque

mydeq = deque()
myset = set()

size, k = [int(x) for x in input().split()] 

for val in [int(x) for x in input().split()]:
  if val not in myset:
    mydeq.appendleft(val)
    myset.add(val)

    if(len(mydeq) > k):
      myset.remove(mydeq.pop())

print(len(mydeq))
print(*mydeq)
      
    

