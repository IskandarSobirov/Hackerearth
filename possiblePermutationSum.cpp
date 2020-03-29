#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 



int main()
{
    timesaver; 

    int t, i;
cin >> t;

for(int i = 0; i < t; i++)
	{
		int n;
	cin >> n;
	
		if(n == 1)
		cout << 1 << endl;
		else if((n & 1) == 0)
		{
			ll ans;
			ll tmp = (n + 1) / 2;
			ans = (2 * tmp + 1) * (n / 2) - tmp - 1;
			// assert(ans == debug(n));
		cout << ans << endl;
		
		}
		else
		{
			ll ans;
			ll tmp = (n + 1) / 2;
			ans = (2 * tmp + 1) * (n / 2) - tmp;
		 
     cout << ans << endl;
		
		}
	}

    return 0;
}
