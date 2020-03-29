#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
 
const int mod = (int)1e9 + 7; 
const int mx = (int)1e5+2;
int val[mx]; 
 
 
ull gcd(ull a, ull b)
{
    if(b == 0) return a;
    
    return gcd(b,a%b);
}
int main()
{
    timesaver; 
 
    ull n; 
 
    cin >> n;
    ll sum = 0;
 
            ll g = 1;
   for(int i= 1; i <=n; i++)
   {
            
           
            for(int j = 1; j <=n; j++)
            {
            ll g = gcd(i,j);
            g*=g;
            
            sum+=(i*j) / g % mod;  
            
            cout <<sum <<" "<< i* j<<" " <<gcd(i*i,j*j) << endl;
        }
 
   }
 
    cout << (sum) % mod <<"\n";
 
    return 0;
}