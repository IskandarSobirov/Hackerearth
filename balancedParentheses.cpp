#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

void chechBalance(string s)
{
    stack<char>stk;

    for(int i = 0; i< s.size(); i++)
    {
        if(s[i] == '{')
          stk.push(s[i]);
        else if(s[i] == '(')
          stk.push(s[i]);
        else if(s[i] == '[')
          stk.push(s[i]);
        else if(!stk.empty() && (stk.top() + 1 == s[i] || stk.top() + 2 == s[i]) )
          stk.pop();
                
    }
   
    if(stk.empty())
      cout << "YES\n";
    else 
      cout << "NO\n";

} 
int main()
{
    timesaver; 

    int cases;
    cin >> cases;
    
    while(cases--)
    {
      string s;
      getline(cin>>ws,s);

      chechBalance(s);
    }




    return 0;
}
