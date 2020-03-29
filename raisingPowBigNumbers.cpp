#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 


//Binary exponentiation helps raise big number to power
//The time complexity is O(log N)
ll binaryExponentiation(ll a, ll b)
{
    ll res = 1;

    while(b > 0)
    {
        if(b % 2 == 1) //only if it is odd number
          res = res * a % mod;
        
        a = a * a % mod; 

        b = b / 2;
    }

    return res;
}

int main()
{
     timesaver; 

    ll tests; 
    ll num;

    cin >> tests; 

    while(tests--)
    {
        cin >> num;

        if(num == 1 || num % 2 == 0) cout << 0 << endl;
        

       else{
           cout <<binaryExponentiation(2,num/2-1)%mod << endl;
       }
    }

    return 0;
}
