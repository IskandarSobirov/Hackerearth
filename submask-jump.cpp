#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

int minJumps(int a, int b, int d) 
{ 
    // Assigning maximum of a and b to b 
    // and assigning minimum of a and b to a. 
    int temp = a; 
    a = min(a, b); 
    b = max(temp, b); 
  
    // if d is greater than or equal to b. 
    if (d >= b) 
        return (d + b - 1) / b; 
  
    // if d is 0 
    if (d == 0) 
        return 0; 
  
    // if d is equal to a. 
    if (d == a) 
        return 1; 
  
    // else make triangle, and only 2  
    // steps required. 
    return 2; 
} 
 
int main()
{
    timesaver; 

  ll x,y, query, a, b;

  cin >> x >> y >> query;

  while(query--)
  {
    cin >> a >> b;


   cout <<  minJumps(x,y,a);
  }







    return 0;
}
