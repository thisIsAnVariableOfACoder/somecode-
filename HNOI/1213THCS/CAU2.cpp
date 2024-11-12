#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second

typedef long long ll;

ll n;
pair<ll,ll> dt[10005];
bool mak[10005];

int main() {
    ll i,j,d,t,endd,ans;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> d >> t;
        dt[i] = make_pair(d,t);
    }

    sort(dt+1,dt+n+1);
    memset(mak,true,sizeof(mak));
    ans = 1;
    for(i = 2; i <= n; i++) {
        for(j = 1; j < i; j++) {
            if (mak[j]) {
                endd = dt[j].fi + dt[j].se;
                if (endd<=dt[i].fi) {
                    mak[j] = false;
                    break;
                }
            }
        }
        if (mak[j]) {
            ++ans;
        }
    }

    cout << ans;
}

