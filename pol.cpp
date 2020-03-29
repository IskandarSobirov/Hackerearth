#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mx = (int)1e9; 

char p[50];
char num[50];
string solve(string n);

int palindrome(ll N)
{
 
 if(N <= 10) return true;
  ll s=0,r,num=N;
 while(N)
 {
	 r=N%10;
  s=10*s+r;
   N/=10;
 }
 if(s==num)
   return 1;
 return 0;
}
 

void printPal()
{
    
		for(int i = 0; i < strlen(p); i++){
		
		 	if(p[i]==' ') continue;
		 	cout << p[i];
		}

		cout << endl;
}

ll findN(ll x)
{
   //if(palindrome(x)) return x;
  // if(x<=10) return x;
   
 ll i;   
  for(i=x; ;i++)
     if(palindrome(i))
 	   break;
 return i;
}

ll findNextSmallPal(ll x)
{
    if(x <= 10) return x;
    
    //cout << x << endl;

       ll next = findN(x);
      // ll pos;
       ll len =to_string(next).length();
     
     
     
      ll pos;
    
    if(len%2==0)
    {
      	pos=x/pow(10,len/2)+pow(10,len/2);
    }
    else{
        
        pos=x/pow(10,len/2)+pow(10,len/2);
    }
    
   // cout << pos << endl;
   
    return pos;
}

ll make_pal(ll x)
{
    if(x<=9) return x;
  string s =to_string(x);
  
     string l = s.substr(0,s.size()/2);
		 cout << l << endl;
      s = l;
		  reverse(l.begin(),l.end());
			 cout << l << endl;
			s+=l;
			 cout << s << endl;

 return stoi(s);
}
  


int main() 
{ 
   ull n, first,sec;

   cin >> n;


  string s;
	for(int i = 0; i < n; i++)
	{

         cin >> first >> sec;
        
        bool pal = false;
          if(palindrome(first) and first > 10)  pal = true;
          
         
      
          ll ps = findNextSmallPal(first);
        
        //  cout << ps << endl;
      
             
        cout << make_pal(ps+sec-1) << endl;
       
        
        
        
	}

   
    return 0; 
} 