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

  string line;
  set<char>st;
  string s, c;

    while(getline(cin , s))
    {
        c = " ";

        bool check = false;

        for(int i = 0; i < s.size(); i++)
        {
            if(check) {
              c+=s[i];
              continue;
            }

            if(i < s.size()-1 && s[i] == '/' && s[i+i] == '/')
            {
              c+="//";
              check = true; 
              i++;
            }

            else if( i < s.size() -1 && s[i]=='-' && s[i+1]=='>')
            {
              c+='.';
              i++;
            }
            else 
            {
                c+=s[i];
            }
        }
       cout << c << "\n";
    }



    return 0;
}
