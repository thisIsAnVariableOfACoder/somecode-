#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n;
ll a[1000005];

int main() {
    npk;

    ll i,ans;
    cin >> n;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ans = 0;
    for(i = 1; i <= n; i++) {
        ans += (((a[i]+a[i-1])>a[i-2]) && ((a[i-1]+a[i-2])>a[i]) && ((a[i]+a[i-2])>a[i-1]));
    }

    cout << ans;
}
