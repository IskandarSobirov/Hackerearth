#include <bits/stdc++.h>
   #include <vector>
    using namespace std;
    const int mx = 200000;
    vector <int> adj[mx];
    bool visited[mx];
    int ter[mx]; 
     int busy = 0;
    
    // prints all not yet visited vertices reachable from s 
void dfs(int s)  
{ 
    
    // Create a stack for DFS 
    stack<int> stack;  
  
    // Push the current source node. 
    stack.push(s); 
  
    while (!stack.empty()) 
    { 
    
        s = stack.top(); 
        stack.pop(); 
  
    

        for (auto i = adj[s].begin(); i != adj[s].end(); ++i) 
        {    
            if (!visited[*i]) 
                stack.push(*i); 
            i++;
            for(auto j:ter)
            {
                if(*i == j)
                    busy++; 
            }
            --i;
         }
    
        
        if (!visited[s]) 
        { 
            cout << s << " "; 
            visited[s] = true; 
        } 
    
    cout << endl;
  
 } 
}
    void initialize(int n) 
    {
        for(int i = 0;i < n;++i)
         visited[i] = false;
    }
 
    int main() {
        int nodes, x, y, k;
        cin >> nodes >> k;                    
                    
        for(int i = 0;i < nodes-1;++i) {
         cin >> x >> y;     
         
         adj[x].push_back(y);                   
         adj[y].push_back(x);                  
        }
     
   
 
      
      for(int i = 0; i < k; i++)
        cin>>ter[i];
      
        initialize(nodes);  
 
        for(int i = 0;i < k;++i) {
         if(visited[i] == false)     {
             dfs(ter[i]); 
             busy++;
           }
        } 
        cout << k + busy << endl;
        return 0;
    }