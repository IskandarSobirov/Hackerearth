#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

int arr[50];
int coin_ways_helper(int n)
{
    if(arr[n] != -1)
       return arr[n];
    
    if(n < 0)
      return 0;

    arr[n] = coin_ways_helper(n-1) + coin_ways_helper(n-5); 
    
    return arr[n];
}

int coin_ways(int n)
{
  memset(arr,-1, sizeof(arr)); 
  
  return coin_ways_helper(n);
}


int main()
{
    timesaver; 

   int n;

   cin >> n;

  

  cout << coin_ways(n) << endl;

  for(int i = 0; i <= n; i++)
    cout << arr[i] <<" ";
    return 0;
}
