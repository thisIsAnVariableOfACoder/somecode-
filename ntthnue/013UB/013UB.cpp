#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m;

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void read() {
    freopen("013UB.INP","r",stdin);
    freopen("013UB.OUT","w",stdout);
}

int main() {
    fastIO();
    read();

    ll uscln;
    cin >> n >> m;

    uscln = __gcd(n,m);

    cout << uscln << " " << (n*m)/uscln;
}
