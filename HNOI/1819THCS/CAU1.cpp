#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a1,a2,b1,b2,sum,cnt,i,j;
    cin >> a >> b >> k;

    a1 = ll(ceil(sqrt(a)));
    b1 = sqrt(b);
    a2 = ll(ceil(cbrt(a)));
    b2 = cbrt(b);

    cnt = 0;
    for(i=a1; i<=b1; i++) {
        for(j=a2; j<=b2; j++) {
            sum = abs((i*i)-(j*j*j));
            if (sum<=k) {
                cnt++;
            }
        }
    }

    cout << cnt;
}

