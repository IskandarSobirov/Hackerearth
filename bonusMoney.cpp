#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

int binomial_coefficient(int n, int m) 
{ 
    int res = 1; 
  
    if (m > n - m) 
        m = n - m; 
  
    for (int i = 0; i < m; ++i) { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
  

int calculate_ways(int m, int n) 
{ 
    // not enough mangoes to be distributed 
    if (m < n)  
        return 0; 
      
    // ways  -> (n+m-1)C(n-1) 
    int ways = binomial_coefficient(n + m - 1, n - 1); 
    return ways; 
} 
 
int main()
{
    timesaver; 

  int cases; ll p;
  cin >> cases;
  ll employees, money;
  ll a=0, b;
  for(int i =1; i <=cases; i++)
  {
      cin >> employees >> money;
      
      
      cout << calculate_ways(money,employees) << endl;
  }




    return 0;
}
