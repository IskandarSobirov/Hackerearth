#include<bits/stdc++.h> 
using namespace std; 
int mod = 1000000007; 
typedef long long ll;   
ll countWays(int n, int k) 
{ 
    
    long total = k; 
  
    
    int same = 0, diff = k; 
  
    // Fill for 2 posts onwards 
    for (int i = 2; i <= n; i++) 
    { 
        // Current same is same as previous diff 
        same = diff; 
  
        // We always have k-1 choices for next post 
        diff = total * (k-1); 
        diff = diff % mod; 
  
        // Total choices till i. 
        total = (same + diff) % mod; 
    } 
  
    return total; 
} 

int main()
{
 
 int n, k; 

 cin >> n >> k;

  ll all = countWays(5*n,4);  

  int res = (all - 218400) / k;

  cout << all - (res * k) << endl;

  return 0;
}