def coin_ways(n, dp = {0:1}):
  if n in dp:
    return dp[n]
  if n < 0:
    return 0
  
  dp[n] = coin_ways(n-1) + coin_ways(n-5)
  
  return dp[n]


def coin_waysiterative(n):
  dic = {0:1}
  
  for i in range(1,n+1):
    dic[i] = dic.get(i-1,0) + dic.get(i-5,0)
    
  return dic[n]

n = int(input())

print(coin_ways(n))
print(coin_waysiterative(n))