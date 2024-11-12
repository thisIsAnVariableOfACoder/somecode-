#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll p[1005];
ll dp[1005][1005];

int main() {
    ll i,j,ans;
    ans = 1e9;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> p[i];
    }

    for(i = 0; i <= n+1; i++) {
        for(j = 0; j <= n+1; j++) {
            dp[i][j] = 1e9;
        }
    }
    dp[0][0]=0;
    for(i = 1; i <= n; i++) {
        for(j = 0; j <= n; j++) {
            if (p[i] > 100 && j > 0) {
                dp[i][j] = min(dp[i-1][j+1],dp[i-1][j-1] + p[i]);
            } //  dp[i-1][j-1] + p[i] : mua
            else {
                dp[i][j] = min(dp[i-1][j+1],dp[i-1][j] + p[i]);
            } // dp[i-1][j] + p[i] : mua
            // dp[i][j] : tong so tien phai tra tinh den mon hang thu i voi j lan lay
            // dp[i-1][j+1] : lay
        }
    }
    for(i = 0; i <= n; i++) {
        ans = min(ans,dp[n][i]);
    }

    cout << ans;
}





