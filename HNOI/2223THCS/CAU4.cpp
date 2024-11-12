#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fi first
#define se second

ll n;
pair<ll,ll> ab[500005];
ll pre[500005];

void prefix() {
    ll i;
    pre[0] = 0;
    for(i = 1; i <= n; i++) {
        pre[i] = pre[i-1] + ab[i].se;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("TL.INP","r",stdin);
    freopen("TL.OUT","w",stdout);

    ll i,j,ans,s,minn;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> ab[i].fi >> ab[i].se;
    }

    sort(ab+1,ab+n+1);
    prefix();
    ans = -1;
    s = 0;
    if (n<=5000) { // sub 1->3
        for(i = 1; i <= n; i++) {
            for(j = 1; j < i; j++) {
                s = pre[i] - pre[j-1];
                ans = max(ans,s-(ab[i].fi-ab[j].fi));
            }
        }
    }
    else { // sub 4
        minn = LONG_MAX;
        for(i = 1; i <= n; i++) {
            minn = min(minn,pre[i-1]-ab[i].fi); // tim min s[i] - a[i]
            ans = max(ans,pre[i]-ab[i].fi-minn);
        }
    }

    cout << ans;
}
