#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll a[100005];
ll f[100005];

int main() {
    ll i,j;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(i = 1; i <= n; i++) {
        f[i]=2e9;
    }
    f[1]=0;
    for(i = 1; i <= n-1; i++) {
        for(j = 1; j <= min(2ll,n-i); j++) {
            f[i+j] = min(f[i+j],f[i]+abs(a[i]-a[i+j]));
        }
    }

    cout << f[n];
}
