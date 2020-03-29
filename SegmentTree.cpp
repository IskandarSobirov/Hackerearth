#include <bits/stdc++.h> 
using namespace std; 

typedef  long long ll;
// limit for array size 
const int N = 100000009;  
  
int n; // array size 
  
// Max size of tree 
int tree[N]; 
  
// // function to build the tree 
// void build( int arr[])  
// {  
//     // insert leaf nodes in tree 
//     for (int i=0; i<n; i++)     
//         tree[n+i] = arr[i]; 
      
//     // build the tree by calculating parents 
//     for (int i = n - 1; i > 0; --i)      
//         tree[i] = tree[i*2] + tree[i*2+1] ;
// } 
ll actual[N];
ll indices[N];
ll arr[N];

ll minChange(ll a, ll b)
{
    ll aindex = indices[a];
    ll bindex = indices[b];

   // cout << aindex <<" "<< bindex<<endl;
   // cout << arr[aindex] <<" "<< arr[bindex] <<endl;
    ll changes = 0;
   if( actual[aindex+1] != a) changes++;
   if(actual[bindex+1] != b) changes++;
    
    ll shifts = 0;

   if(actual[bindex+1] != a) shifts++;
   if(actual[aindex+1] != b) shifts++;

    
    return abs(changes - shifts);

}
void buildSegTree(ll arr [], ll treeIndex, ll lo, ll hi)
{
    if(lo == hi) {
        tree[treeIndex] = arr[lo];
        return;
    }

    int mid = lo + (hi - lo) /2;
    buildSegTree(arr, 2 * treeIndex+1, lo,mid);
    buildSegTree(arr,2 * treeIndex + 2,mid+1,hi);

    //merge
    ll change = minChange(tree[2* treeIndex + 1], tree[2*treeIndex+2]);
    //cout << n1 <<" "<< n2 << endl;
    tree[treeIndex] = change;
}
// function to update a tree node 
void updateValTree(ll treeIndex, ll lo, ll hi, ll arrIndex, ll val)
{
        if(lo == hi)
        {
            tree[treeIndex] = val;
            return;
        }
    
    ll mid  = lo + (hi - lo) /2;

    if(arrIndex > mid)
        updateValTree(2*treeIndex + 2, mid+1, hi, arrIndex,val);
    else if(arrIndex <= mid)
        updateValTree(2 * treeIndex + 1, lo,mid,arrIndex,val);
    
   
    //merge
    ll change = minChange(tree[2* treeIndex + 1], tree[2*treeIndex+2]);
    //cout << n1 <<" "<< n2 << endl;
    tree[treeIndex] = change;
}

  
// driver program to test the above function  
int main()  
{ 

 
ll n;
  cin >> n; 
 
  
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
    actual[i+1] = i+1;
    indices[arr[i]] = i;
  }
 

  ll q, x, b;
  cin >> q;

  buildSegTree(arr,0,0,n-1);
 
for(int i = 0; i < n * 2 -1; i++)
  {
    cout << tree[i] << " ";
  }
  cout << endl;



  while(q -- )
  {
      cin >>x >> b;
 
      arr[x-1] = b;
      updateValTree(0,0,n-1,x,b);

      cout << tree[0] << endl;

    
  }

  
    return 0; 
} 