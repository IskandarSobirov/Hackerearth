#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

int board[10][10] = {{0}};

int possibleMoves(int i, int j, int n)
{
  //base case
  if( i < 0 || i >= 10 || j < 0 || j >=10 || n < 0) return 0;

  //placing knight
  if( n == 0 && board[i][j] == 0) 
  {
    board[i][j] = 1;
    return 1;
  }

  int moves = 0;

  moves +=possibleMoves(i+2,j+1,n-1);
  moves +=possibleMoves(i+2,j-1,n-1);
  moves +=possibleMoves(i-2,j+1,n-1);
  moves +=possibleMoves(i-2,j-1,n-1);
  moves +=possibleMoves(i+1,j+2,n-1);
  moves +=possibleMoves(i-1,j+2,n-1);
  moves +=possibleMoves(i-1,j-2,n-1);
  moves +=possibleMoves(i+1,j-2,n-1);

  return moves;
}

int main()
{
    timesaver; 

  int row, col, moves;

  cin >> row >> col >> moves;

  int res = possibleMoves(row-1,col-1,moves);
 
  cout << res << endl;

    return 0;
}
