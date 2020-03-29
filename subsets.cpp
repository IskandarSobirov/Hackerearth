#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

void printSubsets(int arr[], int n)
{
    for(int i = 0; i < (1<<n); i++)
    {
        for(int j = 0; j < n; j++)
        {
          if((i & (1<<j)) > 0)
            cout << arr[j] <<" ";
        }
    cout << endl;
    }
}
 
int main()
{
    timesaver; 

  int arr[] = {1,1,3,3,4,4};
  int n = sizeof(arr) / sizeof(arr[0]);

  printSubsets(arr,n);




    return 0;
}
