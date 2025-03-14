#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
double x;

void read() {
    freopen("009FX.INP","r",stdin);
    freopen("009FX.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

double powDoub(double f, ll g) {
    ll i;
    double ret;
    ret = 1;
    for(i = 1; i <= g; i++) {
        ret = ret*f;
    }

    return ret;
}

int main() {
    fastIO();
    read();

    ll i;
    double ans;
    cin >> n >> x;

    ans = 1;
    for(i = 1; i <= n; i++) {
        ans = ans + i/(powDoub(x,i));
    }

    cout << fixed << setprecision(8) << ans;
}
