#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

bool check(ll arr[10][10], ll id, ll val )
{
  int row = 0;

  for(int i = 0; i < 10; i++)
  {
    if(arr[i][0] == id) row = i;
  }

  for(int i = 0; i < 10; i++)
  {
    if(arr[row][i] == val) return false;
  }
  return true;
}

int main()
{
    timesaver; 

ll N;
    cin >> N;

    ll arr[10][10];

    for(int i = 0; i < 10; i++)
    {
      for(int j = 0; j < 10; j++)
      {
          cin >> arr[i][j];
      }

    }

    unordered_set<ll>st;

    ll count = 0;

    for(int i = 0; i < 10; i++)
    {
       //count = 0;
        for(int j = 1; j < 10; j++)
        {
            if(st.find(arr[i][j]) == st.end()) 
              count++;

            else if(check(arr,arr[i][j],arr[i][0]))
              count++;
            
        }
         st.insert(arr[i][0]); //count = 0;
       // cout << count << endl;
    }
    ll res = N *(N-1) /2;

    cout << res - (count)<< endl;
    return 0;
}
