#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

void read() {
    freopen("021FIB.INP","r",stdin);
    freopen("021FIB.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastIO();
    read();

    ll i,a,b,c;
    cin >> n;

    cout << "1 ";

    a = 0;
    b = 1;
    for(i = 2; i <= n; i++) {
        c = a + b;

        cout << c << " ";

        a = b;
        b = c;
    }
}
