#include <bits/stdc++.h>
using namespace std;

typedef  long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

ll power(ll x, int y)  
{  
    ll temp;  
    if(y == 0)  
        return 1;  
    temp = power(x, y / 2) % mod;  
    if (y % 2 == 0)  
        return temp * temp;  
    else
    {  
        if(y > 0)  
            return x * temp * temp;  
        else
            return (temp * temp) / x;  
    }  
}  

int main()
{
    timesaver; 

    int q;
    ll num;

    cin >> q;
    
    while(q--)
    {
         cin >> num;
        
        ll n = power(3,num); 

        cout << (n+n-1) % mod << endl;
    }




    return 0;
}
