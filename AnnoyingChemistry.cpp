#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

ll gcd(ll a, ll b)
 {
    if(b == 0)
      return a;
    return gcd(b,a%b);
 }

int main()
{
    timesaver; 
	ll a,b,c,d;
	cin >> a >> b >> c >> d;

  cout << ((b*c) / gcd(b,c)/a) << " "<< ((b*d) / gcd(b,d)/b) <<" " 
  << ((b*d) / gcd(b,d)/d)<< endl;
	
  

    return 0;
}
