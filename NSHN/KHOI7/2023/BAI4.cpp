#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define arrSiz 200005

typedef long long ll;

ll n,k,q;
ll l[arrSiz],r[arrSiz],c[arrSiz];
ll a[arrSiz],b[arrSiz];

int main() {
    npk;

    ll i,j,m,ans,total;
    cin >> n >> k >> q;
    for(i = 1; i <= n; i++) {
        cin >> l[i] >> r[i] >> c[i];
    }
    for(i = 1; i <= q; i++) {
        cin >> a[i] >> b[i];
    }

    for(i = 1; i <= q; i++) {
        ans = 0;
        for(j = a[i]; j <= b[i]; j++) {
            total = 0;
            for(m = 1; m <= n; m++) {
                if (j >= l[m] && j <= r[m]) {
                    total += c[m];
                }

                // cout << m << " " << total << "\n";
            }

            // cout << j << " " << total << "\n";

            if (total>=k) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
}




