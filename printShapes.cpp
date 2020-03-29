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


  for(int i = 0; i < 8; i++)
  {
      for(int j = 0; j < 4 - abs(4-i); j++)
        cout << '#';
     
      cout <<"\n";
  }
  
  
  
      return 0;
}
