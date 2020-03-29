#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
 ll d, x, y;


 ll modularExponentiation(ll x,ll n,ll M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;
}


void extendedEuclid(ll A, ll B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        ll temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

//Modular Muutipllicative Inverse
ll modInverse(ll A, ll M)
{
    extendedEuclid(A,M);
    return (x%M+M)%M;    
}

int main()
{
    timesaver; 

    ll a, b, c, m;  

    cin >> a >> b >> c >> m;

    ll ans1 = modularExponentiation(a,b,m); 
    
    extendedEuclid(c,m);
 
    ll ans2 = x % m;
 
   // cout << ans1 << "" << d << " " << x << " " << y << endl;
    cout << (ans1 * ans2 )% m <<"\n";
    




    return 0;
}
