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
    ll points, k;

    vector<pair<ll,ll> > arr;

    ll x, y;
    cin >> points >> k;

    for(int i = 0 ; i < points; i++)
    {
        cin >> x >> y;
        arr.push_back(make_pair(x,i+1));
    }
    
  stack<ll>st;
  ll Psum = 0;
  ll Msum = 0;
    for(int i = 0; i < k; i++)
    {
        for(int i = 1; i < points; i++)
        {
          Psum +=arr[i].first * arr[i].first;
          Msum +=arr[i].first;

          if((Psum / Msum)) st.push(i);

        }

        while (!st.empty())
        {
          cout << st.top() <<" ";
          st.pop();
        }
        cout << endl;
    }


    return 0;
}
