#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

bool count(string &s)
{
    int l = 0, r = s.size()-1;
   
    while(l < r)
    {
        if(s[l] != s[r])
          return false;
      l++;
      r--;
    }
  return true;
}
 int countPol(vector<string>&val)
 {
    int counts = 0;

    for(int i = 0; i < val.size(); i++)
    {
       if(count(val[i]))  
        counts++; 
    }

    return counts;
 }

int main()
{
    timesaver; 


      
    int number, queries;

    cin >> number >> queries;

  vector<string>vec; 
   string s;
    for(int i = 0; i < number; i++)
    {
        cin >> s;
       vec.push_back(s);   
    }

    // for(int i = 0; i < number; i++)
    // {
    //    cout << vec[i] << endl;   
    // }
    int type, x, y,k;
    char ss;
    int p = 0;
    while(queries--)
    {
        cin >> type;
        if(type == 1)
        {
          cin >> x >> y;
          x = x ^ p;
          y = y ^ p;

          vec[x-1].append(vec[y-1]); 

          cout << x <<" " << y << " "<< vec[x-1].size()<<endl;
          vec.erase(vec.begin()+y+1); 
          p = countPol(vec);
          cout << p << "\n";
          for(auto it: vec)
            cout << it << endl;          
        }

        else 
        {
            cin >> x >> k >> ss;
            x = x ^ p;
            k = k ^ p;
            cout << x <<" "<<k << endl;
            if(k==vec[x-1].size()+1)
              vec[x-1].insert(vec[x-1].size(),1,ss);
            else 
              vec[x-1].insert(k-1,1,ss);

            for(auto it: vec)
              cout << it << endl;    
            p = countPol(vec);
            cout << p <<"\n";
        }
    }


    return 0;
}
