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

  int n, num;
  cin >> n;
  int val[n];
  int val2[(int)1e6+1] = {0};
  for(int i = 0; i < n; i++)
  {
    cin >> num;
    val2[num]++;
  }

    sort(val,val+n);
    for(int i = 0; i < (int)1e6+1; i++)
    {
        if(val2[i]==1)
          cout << i <<" ";
    }
  


cout << endl;



    return 0;
}
