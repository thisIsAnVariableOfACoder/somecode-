#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,q;
ll a[1000005];
ll tv,x;
ll b[1000005];
ll c[1000005];

int main() {
    npk;

    ll i,j,d,tmp,tmp2;
    cin >> n >> q;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    d = 0;
    for(i = 1; i <= q; i++) {
        cin >> tv;

        if (tv==1) {
            ++d;
            cin >> b[d] >> c[d];

            // for(j = x; j <= y; j++) {
            //     a[j] *= -1;
            // }
        }
        else if (tv==2) {
            cin >> x;

            tmp = 0;
            tmp2 = a[x];
            for(j = 1; j <= d; j++) {
                if (b[j] <= x && x <= c[j]) {
                    tmp++;
                }
            }
            if (tmp%2) {
                tmp2 *= (-1);
            }

            // cout << tmp2 << " ";
            cout << (tmp2>0) - (tmp2<0) << "\n";
            // if (a[x]>0)
            //     cout << 1;
            // else if (a[x]<0)
            //     cout << -1;
            // else 
            //     cout << 0;
            // cout << "\n";
        }
    }
}
