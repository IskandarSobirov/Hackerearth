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
  int cases, cities,roads;

  vector<int>val;
  cin >> cases;

  while(cases--)
  {
      int x,y,a,b;
      cin >> cities >> roads; 

      for(int i = 0; i < cities - 1; i++)
      {
          cin >> x >> y >> a >> b;
          val.push_back(x);
           val.push_back(y);
            val.push_back(a);
             val.push_back(b);

      }

      cout << val[2] * (cities-1) << endl; 
  }




    return 0;
}
