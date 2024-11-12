#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,k;
string s;
ll num[100005];
ll diffc[30][100005];

ll demsokitukhac(ll x, ll y) {
    if (num[y]-num[x-1]>0) {
        return k+1;
    }
    ll i,ret;
    ret=0;
    for(i = 1; i <= 26; i++) {
        ret += ((diffc[i][y] - diffc[i][x-1]) > 0);
    }

    return ret;
}

ll bs2(ll x) {
    ll l,r,mid;
    l = x;
    r = n;
    while (l<=r) {
        mid = (l+r)/2;
        if (demsokitukhac(x,mid) < k) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }

        // cout << x << " " << mid << " " << demsokitukhac(x,mid) << "\n";

        // cout << l << " " << r << "\n";
    }
    return l;
}

ll bs3(ll x) {
    ll l,r,mid;
    l = x;
    r = n;
    while(l<=r) {
        mid = (l+r)/2;
        if (demsokitukhac(x,mid) <= k) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }

        // cout << x << " " << mid << " " << demsokitukhac(x,mid) << "\n";
    }

    // cout << r;

    return r;
}

int main() {
    npk;

    ll i,j,cnt,a,b;
    cin >> n >> k >> s;

    s = ' ' + s;
    num[0]=0;
    for(i = 1; i <= n; i++) {
        num[i] = num[i-1] + (int(s[i])<=57);
    
        // cout << int(s[i]) << " " << s[i] << "\n";
    }
    // cout << "\n";
    for(i = 1; i <= 26; i++) {
        diffc[i][0]=0;
    }
    for(i = 1; i <= 26; i++) {
        for(j = 1; j <= n; j++) {
            diffc[i][j] = diffc[i][j-1] + (int(s[j])-96==i);
        }
    }
    cnt = 0;
    for(i = 1; i <= n; i++) {
        a = bs2(i);

        // cout << "\n";

        b = bs3(i);
        if (a<=b) {
            if (demsokitukhac(i,a)==k && demsokitukhac(i,b)==k) {
                cnt += (b-a+1);
            }
        }

        // cout << a << " " << b << "\n";
    }

    cout << cnt;
}





