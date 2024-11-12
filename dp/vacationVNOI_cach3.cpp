#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll f[100005][4];
ll a[100005],b[100005],c[100005];

ll vaca(ll x, ll y) {
    if (f[x][y]!=-1) {
        return f[x][y];
    }

    if (y==1)
        f[x][y] = max(vaca(x-1,2) + a[x], vaca(x-1,3) + a[x]);
    else if (y==2)
        f[x][y] = max(vaca(x-1,1) + b[x], vaca(x-1,3) + b[x]);
    else 
        f[x][y] = max(vaca(x-1,1) + c[x], vaca(x-1,2) + c[x]);

    return f[x][y];
}

int main() {
    ll i,ans=0;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    for(i = 1; i <= n; i++) {
        f[i][1]=-1;
        f[i][2]=-1;
        f[i][3]=-1;
    }
    f[0][1]=0;
    f[0][2]=0;
    f[0][3]=0;
    for(i = 1; i <= 3; i++) {
        ans = max(ans,vaca(n,i));
    }

    cout << ans;
}
