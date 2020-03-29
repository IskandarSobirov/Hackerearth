#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

bool isVowel(char x)
{
    return (x  == 'a' || x == 'e' || x == 'i' || x == 'e' || x == 'u');
}

int main()
{
    timesaver; 

  string s;

  cin >> s; 

  map<int,int>arr;

  for(int i = 0; i < s.length(); i++)
  {
        arr[s[i]-'0']++; 
  }    

  for(int i = 0; i < 10; i++)
  {
     // if(arr.find(i) != arr.end())
        cout << i <<" "<<arr[i] << endl;
      
      //else cout << i <<" "<<0 << endl;
  }
  


    return 0;
}
