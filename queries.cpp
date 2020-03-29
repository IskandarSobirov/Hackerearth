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
 
    ll n ,q ,left, right, x,type,num;
 
    cin >> n >> q;
 
   vector<ll>val;
   

    for(int i = 0; i < n; i++)
      {
        cin >> num;
        val.push_back(num);

      }
 
   
    sort(val.begin(),val.end());

    while(q--)
    {
        cin >> type;
        if(type == 1)
        {
          cin >> x;
 
          for(int i = 0; i < n; i++)
           {
               if(x <= val[i])
                  val[i]-=x;
           }  
        }
        else 
        {
          cin >> left >> right >> x;
 
          if(x >= n) 
          {
            cout << left <<"\n";
            continue;
          }
            cout << val[left+x-1] << endl;
          }
        
    }
 
 
 
 
    return 0;
}