#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
const int inf = (int)1e9 + 7; 
bool isPrime[inf];
/*
1. Mark all the numbers as prime numbers except 1
2.Traverse over each prime numbers smaller than sqrt(N)
3.For each prime number, mark its multiples as composite numbers
4.Numbers, which are not the multiples of any number, will remain marked as prime number and others will change to composite numbers.
*/

void sieve(int n)
{
    for(int i = 0; i < n; i++)
      isPrime[i] = true;
    
    isPrime[0]=false;
    isPrime[1]=false;

    for(int i = 2; i * i <= n; i++)
    {
        if(isPrime[i] == true)  //Mark all the multiples of i as composite numbers
        {
            for(int j = i * i; j <=n; j+=i)
              isPrime[j] = false;
        }
    }
}
 
 //Easy function to check if number is prime
 //Runs O(sqr(n)) 
 //Space O(1)
 bool isPrimeFunc(int n)
 {
      for(int i = 2; i * i <= n; i++)
      {
          if(i % 2 == 0)
              return false;
      }
    return true;
 }
int main()
{
    timesaver; 
   
  int n; 
  cin >> n;
  int count = 0;
   sieve(n); //generate primes
  
  for(int i = 0; i < inf; i++)
    if(isPrime[i] == true)
      cout << i << endl;






    return 0;
}
