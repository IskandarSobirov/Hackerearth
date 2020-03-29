#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
 
 
int main()
{
    timesaver; 
  
  int n = 0, k; 
  cin >> n >> k;
 
 
  int u,v;
 
    int val[200000]={0};
   
    
  for(int i = 0; i < n-1; i++)
  {
      cin >> u >> v;
      val[u]++;
      val[v]++;
      
  }
  
  int bus[k];
  int cit;
 
  for(int i=0; i < k; i++){
    cin >> cit;
    bus[i] = cit;
    val[cit] = 0; 
  }    
  
  int busy = 0;
 
         
        for(int i = 0; i < n; i++)
        {
                if(val[i] > 1)
                    busy++;
          
  
        }
 
  cout << k+busy << "\n"; 
 
 
   
    return 0;
}