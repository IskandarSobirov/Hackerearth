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

  int cases;
  cin >> cases;
  while(cases--){
    ll num;
    cin >> num;
    ll fac = 2;
    ll sum = 0;
    
    for(ll i = 1; i < num; i++)
    {
        if(num % i == 0)
          sum+=i;
    }

  cout << sum << endl;
  }

    return 0;
}
