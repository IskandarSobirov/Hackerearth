#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

 
int main()
{
    timesaver; 

    int transaction, query, n, m, num;
    

    cin >> transaction >> query;

    vector<int>cost;

    vector<int>map(100000,0);
    
    for(int i = 0; i < transaction; i++)
    {
        cin >> num; 
        cost.push_back(num); 

        //map[num-1] = transaction - num + 1;
    }
    
  
  
    
 for(int i = 0; i < query; i++)
 {
    cin >> m >> n;

      

      if(n >= transaction){
        cout << -1 << "\n";
        continue;
      }
      
      int count = 0; bool found = false;
      int k;
      for( k = 0; k < transaction && !found; k++)
      {

          if(cost[k] >= m) 
            count++; 
        
         if(count == n)
           found = true;
      }

      if(found)
        cout << cost[k-1] <<"\n";
      else
        cout << -1 << "\n";

 }


    return 0;
}
