#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,tong=0, m, ans=0;
ll a[10005];

void back(ll indx) {
    ll i,j;

    for(i = 0; i <= 1 - (tong+a[indx]>m); i++) {
        tong += a[indx]*i;
        if (indx==n) {
            if (tong>ans) {
                ans = tong;
            }
        }
        else
            back(indx+1);
        tong -= a[indx]*i;
    }
}

int main() {
    ll i;
    cin >> n >> m;
    for(i = 1; i <= n; i++)  {
        cin >> a[i];
    }

    back(1);

    cout << ans;
}
