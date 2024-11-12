#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll a[155];
ll b[155];
ll buachu=0,sum=0,tmp1,tmp2,ans=7500005;

void fastio() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void back(ll indx) {
    ll i,j;

    for(i = (buachu==0); i <= 1; i++) {
        tmp1 = buachu;
        if (i==0) {
            cout << indx << " " << min(ll(a[indx]/2),max(a[indx]-1000,0ll)) << "\n";

            tmp2 = min(ll(a[indx]/2),max(a[indx]-1000,0ll));
            if (tmp2<1500) {
                buachu--;
            }
        }
        else {
            if (a[indx]>=1500) {
                buachu++;
            }
            tmp2 = a[indx];
        }
        sum += tmp2;
        b[indx] = i;
        if (indx==n) {
            for(j = 1; j <= n; j++) {
                cout << b[j] << " ";
            }
            cout << sum << "\n";

            ans = min(ans,sum);
        }
        else {
            back(indx+1);
        }
        sum -= a[indx]*i + (min(ll(a[indx]/2),max(a[indx]-1000,0ll)))*(i==0);
        buachu = tmp1;
    }
}

int main() {
    fastio();

    ll i;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    back(1);

    cout << ans;
}
