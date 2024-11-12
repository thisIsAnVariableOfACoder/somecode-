#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,m;
ll a[200005];
ll prefix[200005];
ll b;

void pre() {
    ll i;
    prefix[0]=0;
    for(i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + a[i];
    }
}

ll bs2() {
    ll l,r,mid;
    l = 1;
    r = n;
    while(l<=r) {
        mid = (l+r)/2;
        if (prefix[mid] < b) {
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

    ll i,temp;
    cin >> n >> m;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    pre();
    for(i = 1; i <= m; i++) {
        cin >> b;

        temp = bs2();
        
        cout << temp << " " << b-prefix[temp-1] << "\n";
    }
}
