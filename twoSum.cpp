#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

bool tow_sum(int arr[], int size, int k)
{
    set<int>seen;

    for(int i = 0; i < size; i++)
    {
        if(seen.find(k-arr[i]) != seen.end())
          return true;
        else 
          seen.insert(arr[i]);
    }
    return false;
}
 
int main()
{
    timesaver; 
  
  int size,nums, k;

  cin >> size >> k;
  int arr[size];

  for(int i = 0; i < size; i++)
    cin >> arr[i];

  if(tow_sum(arr,size,k))
    cout <<boolalpha << true <<endl;
    else 
      cout << boolalpha << false << endl;


    return 0;
}
