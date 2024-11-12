#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

ll bs(ll a) {
    ll l,r,mid;
    l = 1;
    r = n;
    while(l<=r) {
        mid=(l+r)/2;
        if ((a*mid)<=n)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return r;
}

void counttCap() {
    ll i,cnt,x;
    cnt = 0;
    for(i = 1; i <= n; i++) {
        x = bs(i);
        if (i*x<=n) {
            cnt = cnt + x;
        }
	}

    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
//    freopen("CAU1.INP","r",stdin);
//    freopen("CAU1.OUT","w",stdout);

    cin >> n;

    counttCap();
}
