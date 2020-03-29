#include <bits/stdc++.h>
using namespace std;

#define long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
#define mod 1e9 + 7;

 
int main()
{
    timesaver; 
    int n, cases;
    cin >> cases;
    while(cases--)
    {
        cin >> n;
        int div = n / 12;
        
        if( n % 12 != 0)
        {
          int rem = 13 - n % 12;

          if(rem == 11 || rem  == 2 || rem == 5 || rem == 8)
          cout << rem + 12 * div<< " " << "MS" << endl;

          else if(rem == 1 || rem == 12 || rem == 6 || rem == 7)
          cout << rem + 12 * div <<" "<< "WS" << endl;
        
          else if(rem == 3 || rem == 10 || rem == 4 || rem == 9)
          cout << rem + 12 * div <<" "<< "AS" << endl;


        }
        else 
        {
          cout << n - 11<<" "<< "WS" << endl;
        }


    }

  






    return 0;
}
