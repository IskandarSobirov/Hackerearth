#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
bool  min(int a,int b) { return a < b ? 1:0;} 
bool  mx(int a,int b) {return a > b ? 1:0;}   
const int mod = (int)1e9 + 7; 

 
int main()
{
    timesaver; 

    int cases, operation,nums;

    cin >> cases;

    deque<int>stk;
    int last = 0, i;
    while(cases--)
    {
        cin >> operation;
        if(operation == 1)
            {
              cin >> nums;
              
              //this function inserts in a sorted order
              for( i = 0; nums < stk[i]; i++){}
              stk.insert(stk.begin()+i,nums);
            } 
            
        
        else if(operation == 2) 
        {
                 if(stk.size() < 3) 
                    cout << "Not enough enemies" << endl;

          else 
            {
                 //sort(stk.rbegin(),stk.rend());     
                int num = ((int)stk.size() / 3);  
                cout << stk[num-1] <<"\n";
            }
        }
   
    }


    return 0;
}
