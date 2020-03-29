#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 


int binarySearch(int val[],int n, int query)
{
    int left = 0, right = n -1, mid;
    while (left<=right)
    {
      mid = left +(right - left) / 2;

        if(val[mid] == query) return mid + 1;

        else if(val[mid] < query)
          left = mid + 1;
        else if(val[mid] > query)
          right = mid - 1;
    }
    return -1;
}
 
int main()
{
    timesaver; 

    int n, q, num;
    cin >> n;
    int val[n];

    for(int i = 0; i < n; i++)
      cin >> val[i];
    
    sort(val,val+n);
    cin >> q;

    while(q--)
    {
        cin>>num;
        cout << binarySearch(val,n,num) << "\n";
    }




    return 0;
}
