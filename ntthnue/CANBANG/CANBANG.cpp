#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m;

void read() {
    freopen("CANBANG.INP","r",stdin);
    freopen("CANBANG.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

ll checkk(ll x) {
    ll mid1,mid2;
    mid1 = (x*(x+1))/2 - ((n+1)*n)/2;
    mid2 = (m*(m+1))/2 - (x*(x+1))/2;

    return abs(mid1-mid2);
}

ll bs() {
    ll l,r,mid;
    l = n;
    r = m-1;
    while(l<=r) {
        mid = (l+r)/2;
        if (checkk(mid) > checkk(mid-1)) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return r;
}

int main() {
    fastIO();
    read();

    cin >> n >> m;

    cout << bs();
}
