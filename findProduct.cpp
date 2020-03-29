#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
long int mod = (int)1000000000 + 7;  

 
int main()
{
    timesaver; 

  long int n;
  cin >> n;

  long int prod = 1, num; 
  
  for(int i = 0; i < n; i++)
  {
    cin >> num;
    prod *=num % mod;
  }
  
  cout << prod  % mod<< endl;

    return 0;
}
