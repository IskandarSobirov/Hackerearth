#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
int N = 0;

void print(vector<vector<int> >&board);
bool is_attacked(vector<vector<int> > &board, int row, int col)
{
    int i, j;
    /*Note that this function is called when "col" queens are 
     already placed in columns from 0 to col -1. 
     So we need to check only left side for 
     attacking queens */
    // Check this row on left side 
    for(i = 0; i < col; i++)
      if(board[row][i] == 1) return true;

    /* Check upper diagonal on left side */
    for( i = row, j = col; i >= 0 && j >= 0; i--,j--)
      if(board[i][j] == 1) return true;
   
    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]) 
            return true; 
      
    return false;
}

bool placeQueen(vector<vector<int> > &board, int col)
{
  if(col >= N )return true;

  for(int i = 0; i < N; i++)
  {
      //if it is safe to place queen
     if(!is_attacked(board,i,col)) 
      {
        //place the queen 
        board[i][col] = 1;

        //recursively check next col and row
        if(placeQueen(board,col+1))
          return true;
    
        //if queen is attacked remove the queen and backtrack
        board[i][col] = 0;
        }

  }
   return false;

}

void print(vector<vector<int> >&board)
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
          cout << board[i][j] <<" ";

      cout <<"\n";
    }
}

int main()
{
    timesaver; 

  
  cin >> N;
   vector<vector<int> > board(N, vector<int>(N,0));
    

    if(placeQueen(board,0)) {
      cout << "YES" << endl;
      print(board);

    }
    else 
      cout << "NO" << endl;


    return 0;
}
