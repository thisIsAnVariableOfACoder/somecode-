#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll x,y,z;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll ans;
    cin >> x >> y >> z;

    ans = x-y;
    ans = ans*z;
    ans = (ans-(ans%y))/y + ((ans%y)>0);

    cout << ans;
}
