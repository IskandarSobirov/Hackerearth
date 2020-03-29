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

  ll n;
  vector<pair<ll,char> > list; 

  cin >> n; 

  ll num1,num2;  

  for(int i = 0; i < n; i++)
  {
    cin >> num1>>num2;
      list.push_back(make_pair(num1,'l'));
      list.push_back(make_pair(num2,'r'));   
  }
   // vector<pair<int,char> >::iterator it;
      sort(list.begin(),list.end());
    
    
    ll count = 0, mx = 0;
    for(auto itr:list)
    {
        
        if(itr.second == 'l')
        {
          count++;
          mx = max(count,mx);
        }
        else 
          count--;

    }

  cout << mx << endl;

    return 0;
}
