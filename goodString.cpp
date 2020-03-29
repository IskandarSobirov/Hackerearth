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


    int n, k , m;

    cin >> n >> k >> m;

    string binary;
    getline(cin>>ws,binary);
    int change = 0;
    int count = 0;
    int left = 0;
    int right=0;
    int index = 0;

            for( right = 0; right < k; right++)
               if(binary[right] == '1') count++;
  right --;
  while(left < binary.size())
  {
      
      cout << left << " " << right << " " << count << endl;
            
            index = right;
            while(count > m )
            {
                if(binary[index] == '1')
                {
                    binary[index] = '0';
                    count--;
                    change++;
                    cout << binary << endl;
                    
                }
                   index--;

            }
          
        right++;
        if(binary[right] == '1')
          count++;
          
        if(binary[left] == '1') count--;
        
        left++;


  }

  cout << change <<"\n";
  cout << binary <<"\n";



    return 0;
}
