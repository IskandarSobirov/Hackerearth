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
ll cases; 

ll num1, num2, k;

cin >> cases; 

while(cases--)
{
    cin >> num1 >> num2 >> k;
   
   ll l = (num1 - 1) / k + 1;
   ll r = num2 / k;
   
   if(l > r)
    cout << "-1 -1" << endl;
    
    else 
    cout << l <<" "<<r << endl;
}
    


    return 0;
}
