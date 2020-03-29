#include<bits/stdc++.h> 
#include<unordered_set> 
using namespace std;

#define timesaver ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int gcd(int a, int b)
{
  if(b==0) return a;

  //cout << "b is: "<< b << "res: "<<a % b << endl;
  return gcd(b,a%b);
}
int gcdN(int n)
{
  vector<int> arr;
    for(int i = 1; i <= n; i++)
    {
        if(gcd(i,n) != 1 && gcd(i,n) != i)
          arr.push_back(gcd(i,n));
    }

    return arr.size();
}

int  main()
{
  int Q,N;
  cin >> Q;
  while(Q--)
  {
  cin >> N;

  cout << gcdN(N) << endl;
  }


  return 0;
}
