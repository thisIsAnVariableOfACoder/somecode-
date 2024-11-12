#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll m,n;
ll a[105][105];
ll dp[105][105];

ll dq(ll x, ll y) {
    if (dp[x][y]!=-1000000000000000001) {
        return dp[x][y];
    }
    
    dp[x][y] = max(dq(x-1,y-1),max(dq(x,y-1),dq(x+1,y-1))) + a[x][y];

    return dp[x][y];
}

int main() {
    ll i,j,ans = -1000000000000000000;
    cin >> m >> n;
    for(i = 1; i <= m; i++) {
        for(j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for(i = 0; i <= m+1; i++) {
        for(j = 0; j <= n+1; j++) {
            if (i == 0 || i == m + 1) {
                dp[i][j] = -1000000000000000002;
            }
            else 
                dp[i][j] = -1000000000000000001;
        }
    }
    for(i = 1; i <= m; i++) {
        dp[i][1]=a[i][1];
    }
    // for(i = 0; i <= m+1; i++) {
    //     for(j = 0; j <= n+1; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    for(i = 1; i <= m; i++) {
        ans = max(ans,dq(i,n));
    }
    // for(i = 0; i <= m+1; i++) {
    //     for(j = 0; j <= n+1; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    cout << ans;
}
