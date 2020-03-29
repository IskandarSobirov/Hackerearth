#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
 
 //Generating Pascal's Triangle up tp numRows;
 vector<vector<int> > generate(int numRows) 
 {
      vector<vector<int> > triangle;

      for(int i = 0; i < numRows; i++)
      {
          triangle.push_back(vector<int>(i+1,1));

          if(i > 1)
          {
              for(int j = 1; j < i; j++)
                triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];
          }
      }
    return triangle;
 }  


//generate Pascal's triangle and return rowIndex
vector<int> kthIndexPascalTriangle(int rowIndex)
{
    vector<int>dp(rowIndex+1,0);

    dp[0] = 1;

    for(int i = 1; i <= rowIndex; ++i)
    {
        for(int j = i; j > 0; --j)
        dp[j] +=dp[j-1];
    } 
    return dp;
}
int main()
{
    timesaver; 

    int numRows; 
    
    cout << "Enter number of rows to build Pascal's Triangle: ";
    cin >> numRows; 

    vector<vector<int> > pascal = generate(numRows);

    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < pascal[i].size(); j++)
        {
            cout << pascal[i][j] <<" ";
        }
        cout << endl;
    }

  int rowIndex;
    cout << "\nEnter row index to get Pascal's triangle at that row: ";
    cin >> rowIndex;

    vector<int> triangleRow = kthIndexPascalTriangle(rowIndex);

    for(int i = 0; i <= rowIndex; i++)
      cout << triangleRow[i] <<" ";
    cout << endl;
    


    return 0;
}
