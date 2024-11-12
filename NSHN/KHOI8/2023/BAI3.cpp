#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll m,n,k;
ll a[1005][1005];
ll prefix2D[1005][1005];

ll hvc(ll x, ll y, ll z) {
    return prefix2D[x][y] - prefix2D[x-z][y] - prefix2D[x][y-z] + prefix2D[x-z][y-z];
}

int main() {
    npk;

    ll i,j,sum,ans;
    cin >> m >> n >> k;
    for(i = 0; i <= m; i++) {
        prefix2D[i][0]=0;
    }
    for(i = 0; i <= n; i++) {
        prefix2D[0][i]=0;
    }
    for(i = 1; i <= m; i++) {
        for(j = 1; j <= n; j++) {
            cin >> a[i][j];
        
            prefix2D[i][j] = prefix2D[i-1][j] + prefix2D[i][j-1] - prefix2D[i-1][j-1] + a[i][j];
        }
    }

    ans = -1000000000000001; // -1e15 - 1
    for(i = k; i <= m; i++) {
        for(j = k; j <= n; j++) {
            sum = hvc(i,j,k) - hvc(i-1,j-1,k-2);
            ans = max(ans,sum);
        
            // cout << sum << "\n";
        }
    }

    cout << ans;
}
