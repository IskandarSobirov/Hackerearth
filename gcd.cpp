#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
//#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

//  int gcd(int a, int b)
//  {
//     if(b == 0)
//       return a;
//     return gcd(b,a%b);
//  }

 unsigned int gcd(unsigned  u, unsigned  v)
{
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned int t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}
  
int main()
{
    timesaver; 


    cout << gcd(90,36) << endl;



    return 0;
}
