#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

 
int main()
{
    timesaver; 
  
  int size;

  cin >> size;

  int a[size], b[size];

  for(int i = 0; i < size; i++)
    cin >> a[i];

  for(int i = 0; i < size; i++)
    cin >> b[i];

    int smallest = INT_MAX;
   for(int i = 0; i < size; i++)
    if(a[i] < smallest)
      smallest = a[i];

    int diff = 0;
    int i= 0;
    bool check = true;
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(a[i] == smallest) continue;

        if(a[i] >= b[i])
        {
            while( a[i] != smallest && check == true && count < 100) 
            {
              //cout << a[i] <<" "<<b[i] << endl;
                a[i] = a[i] - b[i];
                diff++;
                count++;
                if(a[i] < smallest && count > 100)
                {
                  check = false; 
                }
            }
        }
    }
    if(check)
      cout << diff << endl;
      else 
       cout << -1 << endl;

    return 0;
}
