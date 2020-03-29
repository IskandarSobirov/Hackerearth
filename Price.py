cases = int(input())
 
for i in range(cases):
    n, k = [int(x) for x in input().split()] 
    s = input() 
    k = k - 1
    print(s.partition('6'))