#include <bits/stdc++.h>
#include <vector> 
 
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mx = (int)1e9 + 7; 


int help(int input, int b, bool isOdd) 
{ 
    int n = input; 
    int palin = input; 

    if (isOdd) 
        n /= b; 

    while (n > 0) 
    { 
        palin = palin * b + (n % b); 
        n /= b; 
    } 
    return palin; 
} 
   
void generate(int n,vector<int>&all) 
{ 
    int number; 
  
    for (int j = 0; j < 2; j++) 
    { 
        
        ll i = 1; 
        while ((number = help(i, 10, j % 2)) < n) 
        { 
           // cout << number << " ";  
            all.__emplace_back(number);   
            i++; 
        } 
    } 
} 
  
int main() 
{ 
   int n, first,sec;

   cin >> n;
   vector<int>all;
    generate(mx,all); 
    sort(all.begin(),all.end());
   
   while(n--)
   {
     cin >> first >> sec;
    
     int index=(first > 10 ? first-2+sec-1:first+sec-2);
    
     cout << all[index] << endl;
   }

    
    
  
    return 0; 
} 