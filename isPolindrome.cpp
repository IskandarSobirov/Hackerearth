#include <bits/stdc++.h>
using namespace std;

#define long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
#define mod 1e9 + 7;

 
int main()
{
    timesaver; 

    string s;

    cin >> s;
    bool polindrome = true;
    
   int start = 0, end = s.size()-1;
   
   while(start < end && polindrome)
   {
       if(s[start] != s[end])
       { 
           polindrome = false;
       }
       start++, end --;
       
   }
 
    cout << (polindrome == true ? "YES":"NO") << endl;


    return 0;
}
