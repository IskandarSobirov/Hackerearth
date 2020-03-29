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

int cas;

cin >> cas;

while(cas--)
{
int k, n;
string s;
    cin >> n >> k;

    cin >> s;


    if(n < k)
      cout << k / n  << "\n";
    else 
      cout << 0 <<"\n";

}



    return 0;
}
