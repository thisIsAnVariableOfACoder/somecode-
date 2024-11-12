#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n,k;
ll a[100005];
ll b[100005];

int main() {
    ll i;
    cin >> n >> k;
    for(i = 1; i <= n; i++) {
        cin >> a[i];

        b[i] = abs(a[i]);
    }

    sort(b+1,b+n+1,greater<ll>());
    for(i = 1; i <= n; i++) {
        if (abs(a[i])==b[k]) {
            cout << a[i];

            break;
        }
    }
}
