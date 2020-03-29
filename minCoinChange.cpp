#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

//Recursive
int coinChange(int x, vector<int>arr)
{
    if(x == 0) return 0;

    int min = x;

    for(int coin : arr)
    {
            if(x - coin >= 0)
            {
                int c = coinChange(x-coin,arr);
                cout << x - coin <<endl;
                if(min > c + 1 ) min = c + 1;

            }
    }
    return min;
}

//Iterative
int minCoinChange(int x, vector<int>coins)
{
    vector<int>dp(x+1,INT_MAX);

    dp[0] = 0;

    for(int i = 1; i <= x; i++)
    {
            for(int j = 0; j < coins.size(); j++)
            {
                if(coins[j] <= i)
                {
                    dp[i] = min(dp[i],dp[i-coins[j]] +1);
                }
            }
    }

    return dp[x] > x ? -1:dp[x];
}
int main()
{
    timesaver; 

    int x, size, num;
    vector<int>arr;
    cin >> x >> size;

       for(int i = 0; i < size; i++)
        {
                cin >> num;
                arr.push_back(num);

        }

    cout << coinChange(x,arr) << endl;
    cout <<"\nSecond method: "<<minCoinChange(x,arr) << endl;

    return 0;
}
