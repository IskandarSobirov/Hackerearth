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

ll num;

ll hn;
    cin >> num;

   ll a;
  
    while(num--)
    {
       int i = 0;
       cin >> hn;
       string s = "199999999999";
       int count = 0;
       while(count <= hn)
        {
          
          if(i == 2)
            {
                a = s[0]-'0';
                a = a+1;
                s[0] = a + '0';

                a = s[1] -'0';
                a = a - 1;
                s[1] = a + '0'; 
               
                cout << i<< 11 << endl;
                 
            }
           if(i == 3)
            {
                
               swap(s[1],s[2]);
                
            }
            
           if(i == 4)
            {
                 swap(s[2],s[3]);
            }
            if(i == 5)
             {
                 swap(s[3],s[4]);
             }
             
             if( i == 6)
             {
                 swap(s[4],s[5]);
             }
             
            if(i == 7)
             {
                swap(s[5],s[6]);
             }
            if(i == 8)
            {
                  swap(s[6],s[7]);
            }
           if(i == 9)
            {
                  swap(s[7],s[8]);
            }
            if(i == 10)
            {
                 swap(s[8],s[9]);
            }
            if(i == 11)
            {
                swap(s[9],s[10]);
            }
            if(i == 12)
            {
                 swap(s[10],s[11]);
               
            }

          
         
           i++;
           count++;


           if(i >= 13)
                i = i % 13;
            
        }
        cout << s << endl;
    }
//  1 -> 199999999999  

// 2 -> 289999999999

// 3 -> 298999999999

//4 -> 299899999999


//489799999999

    return 0;
}
