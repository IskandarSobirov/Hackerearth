#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long ull;
#define timesaver  ios_base::sync_with_stdio(false); cin.tie(0)
#define min(a,b) a < b ? a:b;
#define max(a,b) a > b ? a:b;
const int mod = (int)1e9 + 7; 
struct solution {
    int len;
    int pos;
    int step;
};

solution longestArithProg(vector<int> const& v) {
    solution best = { -1, 0, 0 };

    for (int i = 1; i < v.size(); ++i) {
        unordered_map<int, int> bestForStep;
        for (int j = 0; j < i; ++j) {
            int step = (v[i] - v[j]) / (i - j);
            if (step * (i - j) == v[i] - v[j]) {
            
                int len = ++bestForStep[step];
                if (len > best.len) {
                    best.len = len;
                    best.pos = i;
                    best.step = step;
                }
            }
        }
    }

    ++best.len;   
    return best;
}

int howManyChangesNeeded(vector<int> const& v) {
    return v.size() - longestArithProg(v).len;
}
int main()
{


    timesaver; 

ll n;
  cin >> n; 

  vector<int>vec;
  ll num;
  for(int i = 0; i < n; i++)
   {
      cin >> num;
      vec.push_back(num);
   }



  ll q, x, b;
  cin >> q;
  while(q -- )
  {
      cin >>x >> b;

      vec[x-1] = b;
      cout << howManyChangesNeeded(vec) << endl;
   

  }

    return 0;
}
