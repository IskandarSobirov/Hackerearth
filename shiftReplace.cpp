#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
 
ll minShifts = 0, minChanges = 0;
const ll mx = 10000009;
ll freq[mx];

ll actual[mx];
ll indices[mx];
ll arr[mx];

ll minChange(ll a, ll b)
{
    ll aindex = indices[a];
    ll bindex = indices[b];

   // cout << aindex <<" "<< bindex<<endl;
   // cout << arr[aindex] <<" "<< arr[bindex] <<endl;
    ll changes = 0;
   if( actual[aindex+1] != a) changes++;
   if(actual[bindex+1] != b) changes++;
    
    ll shifts = 0;

   if(actual[bindex+1] != a) shifts++;
   if(actual[aindex+1] != b) shifts++;

    
    return abs(changes - shifts);

}
 
int main()
{
 timesaver; 
 
ll n;
  cin >> n; 
 
  ll arr[n];
  
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
    actual[i+1] = i;
    indices[arr[i]] = i;
  }
 
  for(int i = 1; i <= n; i++)
    cout << freq[i] <<" ";
    cout << endl;
  
  ll q, x, b;
  cin >> q;
 
ll count = 0, curr= 0;
  for(int i = 1; i < n; i++)
  {
     curr = minChange(arr[i-1],arr[i]);

     count = min(count,curr);
  }


  while(q -- )
  {
      cin >>x >> b;
 
      arr[x-1] = b;

      
     cout << count << endl;
  }
 
    return 0;
}