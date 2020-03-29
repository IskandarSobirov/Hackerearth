#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

string sortString(string s) {
     int mp[26] = {};
        
        //indexing frequency of chars
       for(int i = 0; i < s.size(); i++)
            mp[s[i]-'a']++;
        
        string res="";
        
        while(res.size() != s.size())
        {
            //first adding all small chars
            for(int i = 0; i < 26; i++)
                if(mp[i]-- > 0)
                    res +='a' + i;
            
            //second add bigger chars
            for(int i = 25; i >=0; i--)
                if(mp[i]-- > 0)
                    res +='a' + i;
        }
        
        return res;
}

int main()
{
    timesaver; 


    cout << sortString("leetcode") <<endl;


    return 0;
}
