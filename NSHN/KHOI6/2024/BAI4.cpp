#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,m;
ll a[100005];

int main() {
    npk;

    ll i,s;
    cin >> n >> m;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    s = 0;
    for(i = 1; i <= n; i++) {
        s += (-1)*(a[i]*a[i])*(i%2) + (a[i]*a[i]*a[i]*a[i])*(i%2==0);
    }

    if (s<0) {
        cout << s%m + m;
    }
    else {
        cout << s%m;
    }
}
