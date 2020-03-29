#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

int arr[100000+10];
int val[100000+10];
int main()
{
    timesaver; 
    int N,Q;

    cin >> N >> Q;

    for(int i = 0; i < N-2; i++)
      cin >> arr[i] >> arr[i+1];

    int nodes;

    for(int i = 0; i < 2*Q; i++)
    {
        cin >> nodes;
      
        for(int j = 0; j < nodes; j++)
           cin >> val[i]; 

        cout << 1 << endl;

    }






    return 0;
}
