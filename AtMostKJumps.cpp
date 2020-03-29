#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

 
ll countJumps(int n, int k) 
{ 
    ll res[n]; 
    res[0] = 1; res[1] = 1; 
    for (int i=2; i<n; i++) 
    { 
       res[i] = 0; 
       for (int j=1; j<=k && j<=i; j++) 
         res[i] += res[i-j] % mod; 
    } 
    return res[n-1] % mod; 
} 
   


int main()
{
    timesaver; 

    ll n, k;

    cin >> n >> k;

  cout << countJumps(n,k) % mod << endl;



    return 0;
}
