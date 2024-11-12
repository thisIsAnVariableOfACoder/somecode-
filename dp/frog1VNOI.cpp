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
        f[i] = 2e9;
    }
    f[1]=0;
    f[2]=abs(a[1]-a[2]);
    for(i = 3; i <= n; i++) {
        for(j = 1; j <= 2; j++) {
            f[i] = min(f[i],f[i-j]+abs(a[i]-a[i-j]));
        }
    }

    cout << f[n];
}
