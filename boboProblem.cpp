#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

bool check(vector<ll> times, ll mintime, int day) 
{
  
   ll curr = 0, days=1;

  int i = 0;

  while(i < times.size())
  {
      if(times[i] > mintime)
        return false;

      else if(curr + times[i] <= mintime)
      {
        curr+=times[i];
        i++;
      }

      else 
      { 
        curr = 0;
        days++;
      }
  }

  return day >= days;
}

int main()
{
    timesaver; 

  ll n, m, mtime,times, sum = 0;   
  vector<ll>tim;
  cin >> n >> m;

  for(ll i = 0; i < n; i++)
  {
    cin >> times;
    
    sum+=times;
    tim.push_back(times);
    
  }

   
    ll left = 0;
    ll right = sum;

    while(left < right)
    {
      ll middle = left + ((right - left) / 2);

        if(check(tim,middle,m))
        {
          right = middle;
        }
        else 
          left = middle + 1;
    }

    cout << left <<"\n";

    return 0;
}
