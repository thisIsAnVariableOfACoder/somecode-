#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k;

int main() {
    ll le,ans;
    cin >> n >> k;

    le = n - ll(n/2);
    if (k<=le) {
        ans = n - (1 + 2*(k-1)) + (n%2);
    }
    else {
        ans = 2*(k-le);
    }

    cout << ans;
}
