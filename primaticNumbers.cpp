#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
using namespace std;

void precompute(vector <int> &minimum_summands, int N)
{
    vector <int> is_prime(N + 1, true);
    is_prime[0] = is_prime[1] = false;

    for(int i = 2; i <= N; i++)
    {
        if(is_prime[i])
            for(int multiple = 2*i; multiple <= N; multiple += i)
                is_prime[multiple] = false;
    }

    vector <int> primatic;
    for(int i = 2; i <= N; i++)
        if(is_prime[i] || i == 4 || i == 27 || i == 3125)
            primatic.push_back(i);

   minimum_summands[0] = 0;

    for(int i = 2; i <= N; i++)
        for(int j = 0; primatic[j] <= i; j++)
          minimum_summands[i] = min(minimum_summands[i],1 + minimum_summands[i - primatic[j]]);
}

int main()
{
    const int N = 1e4, oo = 1e9;
    vector <int> minimum_summands(N + 1, oo);
    precompute(minimum_summands, N);

    int no_of_tests;
    scanf("%d", &no_of_tests);

    while(no_of_tests--)
    {
        int n;
       cin >> n;
       cout <<  minimum_summands[n] << endl;
    }

    return 0;
}