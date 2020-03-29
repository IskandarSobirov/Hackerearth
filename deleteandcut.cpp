#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
 ll d, x, y;

 vector<vector<ll> > adj;
  ll n, m;

vector<bool> visited;
vector<int> tin, low;
int timer;

 void dfs(int v, int p = -1) {
  
    visited[v] = true;
    tin[v] = low[v] = timer++;
   
   
    for (int to : adj[v])
     {
        if (to == p) continue;
        
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } 
        else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v])
               remove(adj[v].begin(),adj[v].end(),to);
              //s  cout << v <<  to << endl;

        }
    }
}

void find_bridges() {
    timer = 0;
    visited.assign(n, false);
    tin.assign(n, -1);
    low.assign(n, -1);
    for (int i = 0; i < n; ++i) {
        if (!visited[i])
            dfs(i);
    }
}
 
 void dfsCount(int v, vector<bool>&visited)
 {
    visited[v] = true;
    cout << v << " ";

    for(auto i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if(!visited[*i])
          dfsCount(*i,visited);
          //cout << endl;
    }

 }

 void connected()
 {
   vector<bool>visited(n,false);

   for(int i = 1; i <= n; i++)
   {
      if(!visited[i])
        dfsCount(i,visited);
        //cout << endl;
   }

 }
 


//Modular Muutipllicative Inverse
ll modInverse(ll A, ll M)
{
    A=A%M;
    for(int B=1; B<M ;B++)
        if((A*B)%M == 1)
             return B;
}

ll power(ll x, ll y)  
{  
    ll temp;  
    if(y == 0)  
        return 1;  
    temp = power(x, y / 2) % mod;  
    if (y % 2 == 0)  
        return temp * temp;  
    else
    {  
        if(y > 0)  
            return x * temp * temp;  
        else
            return (temp * temp) / x;  
    }  
}  

int main()
{
    timesaver; 

   
    cin >> n >> m;
    adj.resize(m);

    bool bwins = false;
    ll u,v;
    for(int i = 0; i < m; i++)
    {
      cin >>v >> u;
      adj[v].push_back(u);
      adj[u].push_back(v);
    }

     //find_bridges();
     //connected();

     ll a = 3, m = 11;

     cout << power(3,mod-2) << endl;

    return 0;
}
