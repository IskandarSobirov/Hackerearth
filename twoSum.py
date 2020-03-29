def two_sum(lst, k):
  dic = {}
  
  for num in lst:
    if k - num in dic:
      return True
    else:
      dic[num] = True
  return False


lst = [int(x) for x in input().split()]
k = int(input())

print(two_sum(lst,k))