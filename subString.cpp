#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
//#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

void findSubstring(string s)
{
    ll size = s.size();

    ll res = size *(size+1) / 2;

    ll a = 0, b = 0, c = 0;

    for(int  i = 0; i < s.size(); i++)
    {
          if(s[i] == 'a')
          {
            a=i+1;
            res -=min(b,c);
          }

          if(s[i] == 'b')
          {
              b=i+1;
              res -=min(a,c);
          }
          if(s[i]=='c')
          {
            c=i+1;
            res -=min(a,b);
          }
    }
    cout << res << endl;
}
 
int main()
{
    timesaver; 
  ll cases;
  cin >> cases;

  while(cases--)
  {
  string s;
  cin >> s;
  
  findSubstring(s);
  }



    return 0;
}
