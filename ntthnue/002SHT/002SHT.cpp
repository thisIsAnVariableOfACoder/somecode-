#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

double a,b,h;

void read() {
    freopen("002SHT.INP","r",stdin);
    freopen("002SHT.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastIO();
    read();

    cin >> a >> b >> h;

    cout << fixed << setprecision(3) << (a+b)*h/2;
}
