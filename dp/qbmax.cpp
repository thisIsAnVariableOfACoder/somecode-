#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll m,n;
ll a[105][105];
ll dp[105][105];

void fastio() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastio();

    ll i,j,ans=-1e10;
    cin >> m >> n;
    for(i = 1; i <= m; i++) {
        for(j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    for(i = 0; i <= m; i++) {
        dp[i][0]= -1e18-1;
        dp[i][n+1]= -1e18-1;
    }
    for(i = 0; i <= n; i++) {
        dp[0][i]= -1e18-1;
        dp[m+1][i]= -1e18-1;
    }
    for(i = 1; i <= m; i++) {
        dp[i][1]=a[i][1];
    }
    for(i = 2; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            dp[j][i] = max(dp[j-1][i-1],max(dp[j+1][i-1],dp[j][i-1])) + a[j][i];
        }
    }
    for(i = 1; i <= m; i++) {
        ans = max(ans,dp[i][n]);
    }
    
    cout << ans;
}

