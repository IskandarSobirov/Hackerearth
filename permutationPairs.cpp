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

    int n, num, res = 0;
    cin >> n;
     stack<int>stk;
    for(int i = 0; i < n; i++)
    {
       

        cin >> num;

        while(!stk.empty() && num > stk.top())
        {
            stk.pop();
            res++;
        }
        if(!stk.empty()) res++;

        stk.push(num);
    }

   cout << res << endl;




    return 0;
}
