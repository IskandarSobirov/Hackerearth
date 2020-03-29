
import sys

def getWays(n, c):
    # Complete this function
    n_perms = [1]+[0]*n
    for coin in c:
        #print(coin,n+1)
        for i in range(coin, n+1):
            print(i,coin) 
            print(n_perms[i], n_perms[i-coin]) 
            n_perms[i] += n_perms[i-coin]
            print(*n_perms)
    return n_perms[n]
    
n, m = input().strip().split(' ')
n, m = [int(n), int(m)]
c = list(map(int, input().strip().split(' ')))


ways = getWays(n, c)
print(ways)