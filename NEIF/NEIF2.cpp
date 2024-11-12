#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k;

int main() {
    ll chan,ans;
    cin >> n >> k;

    chan = ll(n/2);
    if (k<=chan) {
        ans = 2*k;
    }
    else {
        ans = 1 + (k-chan-1)*2;
    }

    cout << ans;
}
