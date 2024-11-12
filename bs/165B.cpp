#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,k;

bool checkk(ll v) {
    ll cnt,i,tmp;
    cnt = 0;
    tmp = 1;
    while((v/tmp)>0) {
        cnt += v/tmp;
        tmp *= k;
    }

    return (cnt<n);
}

ll bs2() {
    ll l,r,mid;
    l = 1;
    r = n;
    while(l<=r) {
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

    cin >> n >> k;
    
    cout << bs2();
}
