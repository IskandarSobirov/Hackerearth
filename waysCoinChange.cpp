#include <bits/stdc++.h>

using namespace std;

int c[52];
int numCoins;
long long table[52][252];
bool calculated[52][252];
long long solve(int make,int size)
{   
    table[0][0] = 1;
    int i,j;
    for(i = 1; i <= size+1; i++)
    {
        table[i][0] = 1;
        for(j = 1; j <= make; j++)
        {
         table[i][j]=table[i-1][j] + (c[i-1] <= j ? table[i][j-c[i-1]]:0);  
        }
    }
    
    return table[i-1][j-1]; 
}
int main(){

    int make;
    cin>>make>>numCoins;
    for(int i=1;i<=numCoins;i++){
        cin>>c[i];
    }

    cout<<solve(make,numCoins)<<endl;


    for(int i =1; i <=make; i++)
        {
            for(int j=1; j<=make; j++)
            cout << table[i][j]<<" ";
            cout << endl;
        }
    return 0;
}