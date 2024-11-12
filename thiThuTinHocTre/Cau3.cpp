#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,a,b;

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastIO();

    ll ngan,dai;
    cin >> n >> a >> b;

    dai = (n-(n%b))/b;
    ngan = (n%b)/a;

    cout << dai+ngan;
}
