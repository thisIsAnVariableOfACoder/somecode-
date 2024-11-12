#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,m,c,t,v;
ll pre[100005];

void prefix() {
    ll i;
    pre[0]=0;
    for(i = 1; i <= n; i++) {
        cin >> c >> t;

        pre[i] = pre[i-1] + (c*t);
    }
}

ll bs3(ll x) {
    ll l,r,mid;
    l = 1;
    r = n;
    while(l<=r) {
        mid = (l+r)/2;
        if (pre[mid]<x) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return l;
}

int main() {
    npk;

    ll i;
    cin >> n >> m;
    prefix();
    for(i = 1; i <= m; i++) {
        cin >> v;

        cout << bs3(v) << "\n";
        // cout << pre[bs3(1)] << " ";
    }
}
