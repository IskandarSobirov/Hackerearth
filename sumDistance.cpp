#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef   long double ull; 
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mx = (int)5e5 + 7; 


ull arr[mx];
int main()
{
    timesaver; 

  ull points, dis, prev = DBL_MIN, sum = 0;
  cin >> points;

    for(ll i = 0; i < points; i++)
      cin >> arr[i];
    
    ll s = 0;
//sort(arr,arr+(int)points);


float p = 3.14159;
for(ll i = 0; i < points; i++)
    {
       
            dis =  (points-1)*sin(2*arr[i])/2;
             
            sum+=dis;
       
    }
    
     
    
  
  cout<<fixed << setprecision(2);
  
    cout << sum  << endl;
    return 0;
}
