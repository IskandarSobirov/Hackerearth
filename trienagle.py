
mod = 1000000000+7
q = int(input()) 



for i in range(q):
    num = int(input())
    
    colored = pow(3,num,mod)
    
    print((colored+colored-1)% mod) 