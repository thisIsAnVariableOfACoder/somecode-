#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll t,n,x;
ll a[200005];

bool checkk(ll h) {
    ll i,cnt;
    cnt = 0;
    for(i = 1; i <= n; i++) {
        cnt += max((h-a[i]),0ll);
    }

    return (cnt<=x);
}

ll bs3() {
    ll l,r,mid;
    l = 1;
    r = 2000000000;
    while(l<=r) {
        mid = (l+r)/2;
        if (checkk(mid)) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return r;
}

int main() {
    npk;

    ll i;
    cin >> t;
    while(t--) {
        cin >> n >> x;
        for(i = 1; i <= n; i++) {
            cin >> a[i];
        }

        cout << bs3() << "\n";
    }
}
