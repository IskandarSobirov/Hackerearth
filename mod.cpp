#include <bits/stdc++.h> 
using namespace std; 
  
// Utility function to add an undirected edge (u,v) 
void addEdge(int g[][2], int u, int v,int w) 
{ 
   g[u][v] = w;
} 
   
//  Driver code to test above methods 
int main() 
{ 
   int n, k, u,v,w;

   cin >> n >> k;
    int g[n][2];   

    for(int i = 0; i < n-1; i++)
    {
        cin >> u >> v >> w;
        addEdge(g,u,v,w); 
    }
    

    cout << n / 2 << endl;
    return 0; 
} 