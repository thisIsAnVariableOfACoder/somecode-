#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll f[100005][4];
ll a[100005],b[100005],c[100005];

int main() {
    ll i;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    f[0][1]=0;
    f[0][2]=0;
    f[0][3]=0;
    for(i = 0; i <= n-1; i++) {
        f[i+1][1] = max(f[i][2] + a[i+1], f[i][3] + a[i+1]);
        f[i+1][2] = max(f[i][1] + b[i+1], f[i][3] + b[i+1]);
        f[i+1][3] = max(f[i][1] + c[i+1], f[i][2] + c[i+1]);
    }

    cout << max(f[n][1],max(f[n][2],f[n][3]));
}