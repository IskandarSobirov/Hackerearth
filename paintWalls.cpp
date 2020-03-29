#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
const int mx = 1000;
ll psa[mx+2][mx+2]; 

void prefixSum2D(ll a[][mx]) 
{ 
    
    psa[0][0] = a[0][0]; 
  
    // Filling first row and first column 
    for (int i = 1; i < mx; i++) 
        psa[0][i] = psa[0][i - 1] + a[0][i]; 
    for (int i = 0; i < mx; i++) 
        psa[i][0] = psa[i - 1][0] + a[i][0]; 
  
    // updating the values in the cells 
    // as per the general formula 
    for (int i = 1; i < mx; i++) { 
        for (int j = 1; j < mx; j++) 
  
            // values in the cells of new 
            // array are updated 
            psa[i][j] = psa[i - 1][j] + psa[i][j - 1] 
                        - psa[i - 1][j - 1] + a[i][j]; 
    } 
} 
 
int main()
{
    timesaver; 
 
  int cases;
 
  cin >> cases;
 
  while (cases--)
  {
      int minV = INT_MAX, sum=0, n , m, k;
      cin >> n >> m >> k;
 
       
    ll val[mx][mx];  
    
 
    for(int i = 0; i < n; i++)
    {
      for(int j = 0; j < m; j++)
        cin >>val[i][j];
    }
    
    if(k > m)
      {
        cout << -1 <<"\n";
       
      }
    else {
      
       prefixSum2D(val);  
     
  for(int i = 1; i <  n; i++)
    {
      for(int j = 1; j <  k; j++)
      {
          sum+=psa[i][j];
      }
     
      if(i % 2)
       minV = min(minV,sum);
      
    }
 
    cout << minV << endl;
    }
  
  }
 
 
 
 
 
    return 0;
}