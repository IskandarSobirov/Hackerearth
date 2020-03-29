#include <bits/stdc++.h>  
#include<iostream>
  
using namespace std;
typedef long long ll;
// A utility funtion to find maximum of two integers 
int max(int a, int b) { return (a > b)? a : b; } 
  
// A utility funtion to find maximum of three integers 
int max(int a, int b, int c) { return max(max(a, b), c); } 
  
int maxSubArray(vector<ll>& nums) 
    {
        int max_all = INT_MIN, max_in = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            max_in = max(max_in + nums[i], nums[i]);
            max_all = max(max_all, max_in);
        }        
        return max_all;
    }
  

int main() 
{ 
   
  int n ,q;

  cin >> n >> q;   

  vector<ll>val; 

  int num;
  for(int i = 0; i < n; i++)
   {
      cin >> num;
      val.push_back(num);
   }  
  
  int l, r;
  

  while(q--)
  {
      cin >> l >> r;

      reverse(val.begin()+l-1,val.begin()+r);

      cout <<  maxSubArray(val) <<endl;
      reverse(val.begin()+l-1,val.begin()+r);

  } 






} 