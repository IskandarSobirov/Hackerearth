#include <bits/stdc++.h>
using namespace std;

#define long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
//#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
#define mod 1e9 + 7;

 
int main()
{
    timesaver; 

  const int mx = 2;
  int cost[mx], used[mx];
  int cases, n;
  cin >> cases;

  while(cases--)
  {

      for(int i = 0; i < mx; i++)
        cin >> cost[i];
         
        used[0] = used[1] = 0;
        cin >> n;   

        for(int i = 0; i< n; i++)
           for(int j = 0; j < mx; j++)
            {
                int num;
                cin >> num;
                used[j]+=num;
            }

    cout << min(cost[0] * used[0] + cost[1] * used[1], cost[1] * used[0] + cost[0] * used[1]) << endl;   
  }



    return 0;
}
