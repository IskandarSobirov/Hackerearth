#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 


ll walk[10000];
ll matrix[10000000][10000000];
ll cities[10000000][10000000];

int main()
{
    timesaver; 
ll n, m, k;

cin >> n >> m >> k;

for(int i = 0; i < k; i++)
  cin >> walk[i];

ll a, b, l;
  for(int i = 0; i < n-1; i++)
  {
      cin >> a >> b >> l;
      matrix[a][b] = l;
  }
  
ll city1,city2;
  for(int i = 0; i < m; i++)
  {
      cin >> city1 >> city2;

      cities[city1][city1] = 0;
  }


    return 0;
}
