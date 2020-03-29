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
  ll y1,y2,x1,x2,v1,v2;
  
  cin >> cases;

  while(cases--)
  {
    cin >> x1 >> y1 >> x2 >> y2 >> v1 >> v2;
      if(y1 < 0 && y2 > 0)
      {
          double t = (-y1/v1) + (y2/v2);

          cout << fixed << setprecision(5) << t <<"\n";
      }

  }





    return 0;
}
