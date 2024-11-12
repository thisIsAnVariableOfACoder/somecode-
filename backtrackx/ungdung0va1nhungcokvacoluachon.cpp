#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k,m;
ll sohang=0,tong=0,ans=0,temp=0;
ll a[10005];
ll b[10005];
ll c[10005];
ll d[10005];

void back(ll indx) {
    ll i,j;

    for(i = 0 + ((k-sohang)>(n-indx)); i <= 1 - (sohang==k || (tong+a[indx])>m); i++) {
        c[indx] = i;
        sohang += i;
        tong += a[indx]*i;
        temp += b[indx]*i;
        if (indx==n) {
            if (temp>ans) {
                ans = temp;

                for(j = 1; j <= n; j++) {
                    d[j] = c[j];
                }
            }
        }
        else 
            back(indx+1);
        tong -= a[indx]*i;
        temp -= b[indx]*i;
        sohang -= i;
    }
}

int main() {
    ll i;
    cin >> n >> k >> m;

    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(i = 1; i <= n; i++) {
        cin >> b[i];
    }

    back(1);

    cout << ans << "\n";
    for(i = 1; i <= n; i++) {
        if (d[i]) {
            cout << i << " ";
        }
    }
}
