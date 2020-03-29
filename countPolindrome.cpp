#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

int dp[100005][26];

int main()
{
    timesaver; 
    
    int queries;
    string str;
    
    cin >> queries;
    cin >> str;
    
    for(int i = 0; i < str.length(); i++)
       dp[i+1][str[i]-'a']++;
    
    for(int i = 0; i <=str.length(); i++)
      {
          for(int j = 0; j <= str.length(); j++)
          cout << dp[i][j] <<" ";
          cout << endl;
      }

    for(int i=1; i<=str.length(); i++)
    {
        for(int j=0; j < 26; j++)
           dp[i][j] += dp[i-1][j];
    }

    cout << "\nAfter\n";
    
     for(int i = 0; i <=str.length(); i++)
      {
          for(int j = 0; j < 26; j++)
          cout << dp[i][j] <<" ";
          cout << endl;
      }

  
  int l,r, c1,c2;
    for(int i = 0; i < queries; i++)
    {
        cin >> l >> r;
        
       int odd = 0;

        for(int i = 0; i < 26; i++)
        {
            if((dp[r][i] - dp[l-1][i]) % 2 == 1)
                odd++;
        }

        
       int ans = max(odd-1,0);
       cout << (ans == 0 ? "Possible\n":"Impossible\n");

      }
   


    return 0;
}
