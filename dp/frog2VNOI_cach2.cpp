#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k;
ll a[100005];
ll f[100005];

int main() {
    ll i,j;
    cin >> n >> k;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(i = 1; i <= n; i++) {
        f[i]=2e9;
    }
    f[1]=0;
    for(i = 1; i <= n-1; i++) {
        for(j = i+1; j <= min(i+k,n); j++) {
            f[j] = min(f[j],f[i]+abs(a[i]-a[j]));
        }
    }

    cout << f[n];
}