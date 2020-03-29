#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 

bool visited[2000000]; 

struct ad_list { //A structure of type adj_list
   int d;
   ad_list *next;
}
*np = NULL, *np1 = NULL, *p = NULL, *q = NULL;
struct Gr { //A structure of type Gr
   int v;
   ad_list *ptr;
}
arr[2000000];
void addRevEdge(int s, int d) { //add reverse edges in the graph
   np1 = new ad_list;
   np1->d = s;
   np1->next = NULL;
   if (arr[d].ptr == NULL) {
      arr[d].ptr = np1;
      q = arr[d].ptr;
      q->next = NULL;
   } else {
      q = arr[d].ptr;
      while (q->next != NULL) {
         q = q->next;
      }
      q->next = np1;
   }
}
void addEdge(int s, int d) { // add edges in the graph
   np = new ad_list;
   np->d = d;
   np->next = NULL;
   if (arr[s].ptr == NULL) {
      arr[s].ptr = np;
      p = arr[s].ptr;
      p->next = NULL;
   } else {
      p = arr[s].ptr;
      while (p->next != NULL) {
         p = p->next;
      }
      p->next = np;
   }
}
void print_g(int n) {
   for (int i = 0; i < n; i++) {
      cout << "Adjacency List of " << arr[i].v << ": ";
      while (arr[i].ptr != NULL) {
         cout << (arr[i].ptr)->d<< " ";
         arr[i].ptr = (arr[i].ptr)->next;
      }
      cout << endl;
   }
}


 ll d,x,y;
 void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}
ll modInverse(int A, int M)
{
    extendedEuclid(A,M);
    return (x%M+M)%M;    //x may be negative
}
int main()
{
    timesaver; 

ll n, u,v;
cin >> n; 
   
for(int i = 0; i < n; i++)
{
        arr[i].v = i;
        arr[i].ptr = NULL;
}
for(int i = 0; i < n-1; i++){
   cin >> u >> v;
   addEdge(u,v);
}

//print_g(n); 
ll val[n];

for(int i = 0; i < n; i++)
  cin >> val[i];


ll subsets = pow(2,n) -1;
  cout << (subsets * modInverse(subsets+1,mod)) % mod << endl;




    return 0;
}
