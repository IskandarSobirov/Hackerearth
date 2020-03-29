#include<bits/stdc++.h> 
#include<unordered_set> 
using namespace std;

#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int  main()
{
timesaver;

  int cases, size;
  cin >> cases;

  while(cases--)
  {
      cin >> size; 
        int arr[2][size];
      char c;
      for(int i = 0; i< size; i++)
      {
          cin >>c, arr[0][i] = c - 48;
      }

      for(int i = 0; i< size; i++)
      {
          cin >>c, arr[1][i] = c - 48;
      }

      int down = 0, no = 0;
        for(int i = 0; i< size; i++)
        {
             if(arr[down][i] > 2 && arr[down^1][i] <= 2)
            {
                no = 1;
                break;
            }
            if(arr[down][i] > 2) down ^= 1;
        }
      cout << (no == 1 || down == 0 ? "NO\n":"YES\n"); 
      
  }


return 0;

}