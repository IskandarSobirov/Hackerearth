#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

const ll  mx = (int)1e5+10; 

 ll arr[mx][mx];

int main()
{
    timesaver; 

ll q;
 cin >> q;

 for(int i = 0; i < 4; i++)
  {
      for(int j = 0; j< 4; j++)
        cin >> arr[i][j];
  }

    cout << 1 <<" "<<2 <<" "<<3<<endl;


    return 0;
}
