#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

bool isSubsequence(string s, string t) {
        int left = 0;
        int right = 0;
        if(s.empty())
            return true;
        while(right<t.length()){
		//check if each character of s is in t from the beginning in order
            if(t[right]==s[left]){
                left++;
			//return if s is exhausted
            if(left>=s.length()){
                return true;
            }
			//increment the right pointer to point to next character in t
                right++;
            }
            else
                right++;
        }
        return false;
    }
int main()
{
    timesaver; 

    int n, q, x, y;

    cin >> n >> q;

    vector<string>val;
    string s;
    for(int i = 0; i < n; i++)
    {
      cin >> s;
      val.push_back(s);  
    }

    while(q--)
    {
        cin >> x >> y;

        if(isSubsequence(val[x-1],val[y-1]))
          cout << "Yes\n";
        else 
          cout << "No\n";
    }



    return 0;
}
