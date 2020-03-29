def climbingStaircase(n, k):
    res=[]
    CSR(n,k,[],res)
    return res

def CSR(n,k,str_, res):
    if n == 0:
        res.append(str_)
    else:
        for i in range(1,k+1):
            if n-i>=0:
                CSR(n-i,k,str_+[i],res)
    
                
n, k = map(int,input().split())

mod = 10**9+7
print(climbingStaircase(n,k))  
