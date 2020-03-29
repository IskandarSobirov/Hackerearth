
allPol = []
palindrome = 1                  
B = 10                       

k = 0                         
m = palindrome
while(m != 0):                 
	m //= B
	k += 1

while(k <= 15):
    
    m = (k-1)//2                
    l = m                     
    while(l >= 0):            
        digit = ( palindrome // (B**l) ) % B
        if (digit == B-1):     
            l -= 1              
            continue            
        add = B**l
        if(l < k//2):           
            add += B**(l+1)
        palindrome += add
        allPol.append(palindrome)
        l = m                   
    palindrome += 2            
    k += 1
    
    
    
n = int(input())

for i in range(n):
    x,y = [int(x) for x in input().split()]
    
    if x >= 10:
        index = x+y-2
    else:
        index = x + y -1
    print(*allPol)
    count = 0
    for i in range(len(allPol)-1):
        if allPol[i] >= x:
            count = i
            break
            
    #print(allPol[y%len(allPol)])