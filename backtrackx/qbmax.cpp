#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll m,n,sum=0,ans=-10001;
ll a[105][105];
ll b[105]; // day so backtrack
ll c[105][105]; // cai tien 3

void back(ll indx) {
    ll i,j;
    
    for(i = max(b[indx-1]-1,1ll); i <= min(m,b[indx-1]+1); i++) {
        b[indx] = i;
        sum += a[b[indx]][indx];
        if (indx==n) {
            ans = max(ans,sum);
            // for(j = 1; j <= n; j++) {
            //     cout << b[j] << " ";
            // }
            // cout << sum << "\n";
        }
        else {
            if (sum>c[b[indx]][indx]) {
                c[b[indx]][indx] = sum;
                back(indx+1);
            }
        }
        sum -= a[b[indx]][indx];
    }
}

int main() {
    npk;

    ll i,j;
    cin >> m >> n;
    for(i = 1; i <= m; i++) {
        for(j = 1; j <= n; j++) {
            cin >> a[i][j];
        
            c[i][j] = -10001;
        }
    }

    for(i = 1; i <= m; i++) {
        sum = a[i][1];
        c[i][1] = a[i][1];
        b[1] = i;
        back(2);
    }

    cout << ans;
}
