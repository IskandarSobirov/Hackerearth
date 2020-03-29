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

    ll books,lib,days,shipTime;

    cin >> books >> lib >> days;

    ll scores[books];
    
    //scores
    for(int i = 0; i < books; i++)
      cin >> scores[i];
   
   //library has
    ll lib_has[3];
    cout << lib << endl;
    for(int i = 0; i < lib; i++)
    {

      for(int j = 0; j < 3; j++)
        cin >> lib_has[j];
 
      ll num_books = lib_has[0];

        ll bks[num_books];
      for(int k = 0;  k < num_books; k++)
        cin >> bks[k];

      ll sc = 0;
      vector<ll>send;
      for(int d = 0; d < num_books; d++)
      {
  
            send.push_back(bks[d]);
        
      }

      
      cout << i <<" "<<send.size() << endl;
    
      for(int s = 0; s < send.size(); s++)
        cout << send[s] <<" ";
      cout << "\n";


    }

    



    


    return 0;
}
