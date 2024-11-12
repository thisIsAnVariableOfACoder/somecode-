#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll q,l,r;
ll g[500005];

ll cntUocDuong(ll x) {
    ll i,ret;
    ret = 1;
    for(i = 1; i <= x/2; i++) {
        ret += (x%i==0);
    }
    
    return ret;
}

int main() {
    npk;

    ll i,cnt,j;
    cin >> q >> l >> r;
    if (q <= 100 && l<=100 && r<=100) {
        while(q--) {
            cnt=0;
            for(i = l; i <= r; i++) {
                cnt += cntUocDuong(i);
            }

            cout << cnt << "\n";

            cin >> l >> r;
        }
    }
    else {
        for(i = 0; i <= 500000; i++) {
            g[i]=0;
        }
        for(i = 1; i <= 500000; i++) {
            for(j = i; j <= 500000; j+=i) {
                g[j]++; // tang so uoc cua boi cua so thu i len 1
            }
            g[i] = g[i-1] + g[i]; // prefixsum
        }

        while(q--) {
            cout << g[r] - g[l-1] << "\n";
        
            cin >> l >> r;
        }
    }
}
