#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
int prefix[10000];
void prefixSum(int val[], int size)
{
    prefix[0] = val[0];

    for(int i = 1; i < size; i++)
      prefix[i] = prefix[i - 1] + val[i];
}
 int binarySearch(int val[], int size, int power)
 {
      int left = 0, right = size -1, mid;

      while(left <= right)
      {
          mid = left + (right - left) / 2;

          if(val[mid] == power) 
          { 
            while(val[mid]==power)
              mid++;
            
            return mid + 1;
          }
          else if(val[mid] < power)
            left = mid + 1;
          else 
            right = mid -1;
      }
  return size;
 }
int main()
{
    timesaver; 

  int n, q, power, pos,sum;

  cin >> n;
  int enimies[n];
  for(int i = 0 ; i < n; i++)
    cin >> enimies[i];
  
  //sort(enimies,enimies+n);
  prefixSum(enimies,n);
  cin >> q;

  while(q--)
  {
      cin >> power;

       pos = binarySearch(enimies,n,power);

      sum = 0;

      for(int i = 0; i < pos; i++)
           sum+=enimies[i];

    cout << pos <<" "<<sum <<"\n";  
  }



    return 0;
}
