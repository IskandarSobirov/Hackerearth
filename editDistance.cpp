#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
//#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
int c = 0;
int min(int a, int b, int c)
{
    return min(a,min(b,c));
}

int editDistance(string s1, string s2, int m, int n)
{
    int dp[m+1][n+1];

    for(int i = 0; i <=m; i++)
    {
      for(int j = 0; j <=n; j++)
      {
          if(i == 0)
            dp[i][j] = j;

          else if(j == 0)
            dp[i][j] = i;

          else if(s1[i-1] == s2[j-1])
            dp[i][j] = dp[i-1][j-1];

          else  {
            //sscout <<++c << endl;
            dp[i][j] = 1 + min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
          }
          
      }
    }

    return dp[m][n];
}


int main()
{
    timesaver; 
    string s1 = "Iskandar";
    string s2 = "Iskandarr";

    cout << editDistance(s1,s2,8,9) << endl;
    


    return 0;
}
