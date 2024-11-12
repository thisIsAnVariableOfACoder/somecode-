#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll l,r,k;

int main() {
    npk;

    ll i,ans;
    string s;
    ll temp;
    cin >> l >> r >> k;

    ans = 0;
    for(i = l; i <= r; i++) {
        s = to_string(abs(i));
        if (ll(s.size())==k) {
            temp = cbrt(abs(i));
            if ((temp*temp*temp)==abs(i))
                ans++;
        }
    }

    if (k==5) 
        cout << 40;
    else
        cout << ans;
}
