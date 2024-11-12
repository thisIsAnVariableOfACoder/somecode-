#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll a[100005];
ll f[100005];

ll frog(ll x) {
    if (f[x]!=-1) {
        return f[x];
    }
    f[x]=2e9;
    for(ll i = 1; i <= 2; i++) {
        f[x] = min(f[x],frog(x-i)+abs(a[x]-a[x-i]));
    }

    return f[x];
}

int main() {
    ll i;
    cin >> n;
    for(i =1; i <= n; i++) {
        cin >> a[i];
    }

    for(i = 1; i <= n; i++) {
        f[i] = -1;
    }
    f[1]=0;
    f[2]=abs(a[1]-a[2]);

    cout << frog(n);
}
