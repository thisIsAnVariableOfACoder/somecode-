#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define fi first
#define se second

typedef long long ll;

ll n,k,total=0;
ll h[1000005];
pair<ll,ll> a[1000005];

void calc(ll x) {
    ll i,j;
    for(i = max(x-(k-1),1ll); i <= x; i++) {
        if (h[i] > h[x]) {
            break;
        }
    }
    for(j = x+1; j <= x+k-2; j++) {
        if (h[j] > h[x]) {
            break;
        }
    }
    if ((i > x) && (j > x+k-2)) {
        total++;
    }
    a[x].fi = i;
    a[x].se = j;
}

int main() {
    npk;

    ll i,temp1,temp2;
    cin >> n >> k;
    for(i = 1; i <= n; i++) {
        cin >> h[i];
    }

    for(i= 1; i <= n; i++) {
        calc(i);
    }
    sort(a+1,a+n+1);
    temp2 = -1;
    temp1 = 1000005; // 1e6 + 5
    for(i = 1; i <= n; i++) {
        cout << a[i].fi << " " << a[i].se << "\n"; 

        if (a[i].fi >= 1 && a[i].se <= n) {
            temp1 = min(temp1,a[i].fi);
            temp2 = max(temp2,a[i].se);
        }
        if (temp1==1 && temp2==n) {
            break;
        }
    }

    cout << total << " " << i;
}





