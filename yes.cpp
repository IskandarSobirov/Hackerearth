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

  ull n; 

  cin >> n;

ull A[n+1], B[n+1];

  for(int i = 0; i < n; i++)
      cin >> A[i];
   for(int k = 0; k < n; k++)
      cin >> B[k];

  
  int cases;
  cin >> cases;

  int row,col;
  int row2,col2;
  bool f;

while(cases --)
{
 
    f = false;
      cin >> row >> col; 
      cin >> row2 >> col2;


      if((A[row-1] + B[col-1]) % 2 == 0 && (A[row2-1] + B[col2-1]) % 2 == 0)
        f = true;
      else if((A[row-1] + B[col-1]) % 2 != 0 && (A[row2-1] + B[col2-1]) % 2 != 0)
        f = true;
      else 
        f = false;

  

  if(f) cout << "YES\n";
  else cout << "NO\n";

}

    return 0;
}
