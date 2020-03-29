

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

ll bEx(ll a , ll b)
{
    ll res = 1;

    while(b > 0)
    {
        if(b % 2 == 1)
          res =  1LL * res * a % mod;

        a = 1LL *  a * a % mod;
        b = b / 2;
    }
    return res % mod;
}


int main()
{
    timesaver; 

    int cases;

    ll num1, num2;

    cin >> cases;

    while(cases--)
    {
        cin >> num1 >> num2;
        
        //step 1
        ll m = 1LL * num1 * num2 %  (mod-1);
        

        cout << 1LL * bEx(3,num1+num2) * bEx(2,m) % mod<< endl;
      
    }

    return 0;
}

 