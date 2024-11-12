#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll t,k,x;

bool checkk(ll a) {
    ll ret;
    if (a>k) {
        ret = k*(k+1)/2 + (k*(k-1)/2 - (2*k-a-1)*(2*k-a)/2);
    }
    else {
        ret = a*(a+1)/2;
    }

    return (ret<x && ret>0);
    // return ret;
}

ll bs2() {
    ll l,r,mid;
    l = 1;
    r = 2*k-1;
    while(l <= r) {
        mid = (l+r)/2;
        if (checkk(mid)) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return l;
}

int main() {
    npk;

    ll i;
    cin >> t;
    // t = 1;
    while(t--) {
        cin >> k >> x;

        cout << min(bs2(),2*k-1) << "\n";
    }
}
