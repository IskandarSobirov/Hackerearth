#include <bits/stdc++.h>
using namespace std;

string solution(int A, int B, int C)
{
      
      priority_queue< pair<int,char> >values; 
      pair<int,char> temp_pair1, temp_pair2;  

      if(A > 0)
      values.push(make_pair(A,'a')); 

      if(B > 0)
      values.push(make_pair(B,'b')); 

      if(C > 0)
      values.push(make_pair(C,'c'));  

       string result;
      int index;
      while(values.empty() != true)
      {
          temp_pair1 = values.top();
          values.pop();

          for(index = 1; index <= min(2,temp_pair1.first); index++)
            result +=temp_pair1.second; 
            
            temp_pair1.first -=(index-1);  
            
            if(temp_pair2.first)
                values.push(temp_pair2);
            
            temp_pair2 = temp_pair1;

      }
      
      

  return result;
}

string solution2(string &S, string &T)
{
    
    int slen = S.length();
    int tlen = T.length();
    if(S == T ) return "EQUAL";

    if(T[0] != S[0])
    {
        if(S.length() < T.length())
        {
          string s = S;
          s.insert(s.begin(),T[0]);
        }
        else if()
        string ans = "INSERT ";
        ans.push_back(T[0]);
        if(s == T ) return  ans;
    }
    else if(T[tlen-1] != S[slen-1])
    {
          string s = S;

          s.insert(s.end(),T[tlen-1]);
       
          string ans = "REMOVE ";
          ans.push_back(T[tlen-1]);

          if(s == T) return ans;
    }





   


    
  return "IMPOSSIBLE";
}

 
int main()
{
   
  string s = "gain", t = "gains";
  cout << solution2(s,t) << endl;




    return 0;
}
