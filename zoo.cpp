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
string s;
  cin >> s;

  int z = 0, y=0;

  
  for(int i = 0; i < s.length(); i++)
  {
      if(s[i] == 'z') z++;
      if(s[i] == 'o') y++;
  }

    if(z * 2 == y) cout << "Yes\n";
    else 
    cout << "No\n";
 
    cout << z << y << endl;


    return 0;
}
