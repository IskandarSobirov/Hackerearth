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

    int cases,D,A,M,B,X;

    cin >> cases;

   
  
    while(cases--)
    {
      cin >> D >> A >> M >> B >> X;
      int months=0;
      int tot = D;

   if(X <= D) cout << 0 <<"\n";

   else 
    {
    
      while(tot < X)
      {
         for(int i = 0; i < M; i++)
         {
          tot+=A; 
          months++;
         }
        
       if(tot < X){
        months++;
        tot+=B;
      }
      }

      }
    cout << months << "\n";
  }




    return 0;
}
