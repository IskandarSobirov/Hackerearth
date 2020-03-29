#include <bits/stdc++.h>

using namespace std;

//Prime numbers until hundred 
int prime [24]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,61,67,71,73,79,83,89,97};  

int primeCount(long n) {
   
    if(n < 2) return 0;

   unsigned long long product = 1; 
   int count = 0; 

   for(int i = 0; i < 16; i++)
   {
       if(product * prime[i] <= n){
           product*=prime[i];
           count++;
       }
       else break;
   }
   return count;
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = primeCount(n);

        cout << result << "\n";
    }

   // fout.close();

    return 0;
}
