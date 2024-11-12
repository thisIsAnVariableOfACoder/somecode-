#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k;
ll a[100005];
ll f[100005];

ll frog(ll x) {
    if (f[x]!=-1) {
        return f[x];
    }
    f[x]=2e9;
    for(ll i = max(1ll,x-k); i <= x-1; i++) {
        f[x] = min(f[x],frog(i)+abs(a[x]-a[i]));
    }

    return f[x];
}

int main() {
    ll i;
    cin >> n >> k;
    for(i =1; i <= n; i++) {
        cin >> a[i];
    }

    for(i = 1; i <= n; i++) {
        f[i] = -1;
    }
    f[1]=0;

    cout << frog(n);
}
