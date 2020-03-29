#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int> > v;
vector<pair<int, int> > dp;

int solve() {
    if (n == 1) return 0;
    
    dp = vector<pair<int,int> >(n + 1);
    int maxL = 1;
    dp[0] = v[0];
    for (int i = 1; i < n; ++i) {
        // for (int d = 0; d < maxL; ++d) printf("dp[%d] = %d, ", d, dp[d]); printf("\n");
        if (v[i] < dp[0]) {
            // printf("%d: dp[%d] -> %d\n", i, 0, v[i]);
            dp[0] = v[i];
        } else if (v[i] >= dp[maxL - 1]) {
            // printf("%d: dp[%d] -> %d\n", i, maxL, v[i]);
            dp[maxL++] = v[i];
        } else {
            int l = 0, r = maxL - 1, maxR = -1;
            while (r >= l) {
                int mid = (l + r) / 2;
                if (v[i] >= dp[mid]) {
                    maxR = max(maxR, mid);
                    l = mid + 1;
                } else
                    r = mid - 1;
            }
            dp[maxR + 1] = v[i];
            // printf("%d: dp[%d] -> %d\n", i, maxR, v[i]);
        }
    }
    // cerr << maxL << endl;
    return n - maxL;
}

int main() {
    cin >> n;
    v = vector<pair<int,int> >(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
        v[i].first -= i;
        v[i].second = 0;
    }
    cout << solve() << endl;
    return 0;
}

/*
1 1 0 0 2 
4 1 2 1 2 3 
1 1 -1 -1 -1 
1 1 1 -2 -2
*/