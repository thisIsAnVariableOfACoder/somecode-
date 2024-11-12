#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll f[100005];

ll fib(ll x) {
    if (f[x]!=-1) {
        return f[x];
    }
    f[x]= 0;
    for(ll i = 1; i <= 2; i++) {
        f[x] = f[x] + fib(x-i);
    }

    return f[x];
}

int main() {
    ll i;
    cin >> n;

    for(i = 1; i <= n; i++) {
        f[i] = -1;
    }
    f[1] = 1;
    f[2] = 1;

    cout << fib(n);
}
