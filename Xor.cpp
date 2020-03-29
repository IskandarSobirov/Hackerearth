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

int cases;
ll size;
cin >> cases;
while(cases--)
{
  cin >> size;

  ll arr[size];

    for(int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }


    ll mn = INT_MAX;

    for(int i = 1; i < size; i++)
    {
      
        if( ((arr[i] & arr[i-1]) ^ (arr[i] | arr[i-1])) < mn)
          mn = (arr[i] & arr[i-1]) ^ (arr[i] | arr[i-1]);

      int res = (1 & 1) ^ (1 | 1);
      cout << res << endl;
    }
  
}

    return 0;
}
