#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
const int inf = (int)1e9 + 7; 
bool isPrime[inf]; 
void sieve(int n)
{
    for(int i = 0; i < n; i++)
      isPrime[i] = true;
    
    isPrime[0]=false;
    isPrime[1]=false;

    for(int i = 2; i * i <= n; i++)
    {
        if(isPrime[i] == true)  //Mark all the multiples of i as composite numbers
        {
            for(int j = i * i; j <=n; j+=i)
              isPrime[j] = false;
        }
    }
}
 
 
int main()
{
    timesaver; 

  ll cases, interval, temL, temR,left = INT_MIN,right = INT_MAX; 

  cin >> cases;

  while(cases--)
  {
    cin >> interval;
    int count = 0;
    int check = 0;
    vector<int>val;
    while(interval--)
    {
        cin >> temL >> temR;
        val.push_back(temL);
        val.push_back(temR); 
    }

    sort(val.end(),val.end());

    left = val[1], right = val[val.size()-2]; 
    sieve(right);
       for(int i=left; i < right; i++)
          if(isPrime[i] == true)
            count++;
        
     //cout << left <<" "<<right << endl;
     if(count==0)  
          cout << -1 <<"\n";
     else 
       cout << count << "\n";
  }







    return 0;
}
