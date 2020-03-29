#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

//Function to find Greater Common Divisor
ll gcd(int a, int b){ 
   
   ll val[a+b];

   while(b!=0)
   {
        
   }
}
 
int main()
{
    timesaver; 

  ll cas, n, num,query,sum=0;
  cin >> n >> cas;

  ll gc= 0;

  for(int i = 0; i < n; i++)
  {
      cin >> num;
      gc =gcd(gc,num);  
  }
  while(cas--)
  {
      cin >> query;
      
      if(query % gc== 0) cout << "YES\n";
      else cout << "NO\n";
  }




    return 0;
}
