#include <bits\stdc++.h>
using namespace std;

typedef long long ll;

ll n;

void read() {
    freopen("041DS.INP","r",stdin);
    freopen("041DS.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastIO();
    read();

    string s;
    ll i;
    cin >> n;

    s = "";
    i = 1;
    while(s.size() < n) {
        s += to_string(i);
        i++;
    }

    cout << s[n-1];
}
