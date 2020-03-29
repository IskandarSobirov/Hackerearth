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

  int n;

  cin >> n;

  int arr[n];

  for(int i = 0; i < n; i++)
    cin >> arr[i];

  
  set<ll>val;
  ll sum = 0;
  ll eve = 0;
  

  
	ll pwd = pow(2,n); 

	for (long long i=0; i<pwd; i++) 
	{ 
		long long sum = 0; 

		for (int j=0; j<n; j++) 
		  	if (i & (1<<j)) 
				    sum += arr[j]; 

      if(sum%2==0) val.insert(sum);
      cout << sum << endl;
   
} 
  
  
  cout << val.size() << endl;

    


    return 0;
}
