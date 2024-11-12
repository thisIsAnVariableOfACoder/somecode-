#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll inp;

void read() {
    freopen("004DS.INP","r",stdin);
    freopen("004DS.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

int main() {
    fastIO();
    read();

    ll i,neg,od;
    neg = 0;
    od = 0;
    for(i = 1; i <= 3; i++) {
        cin >> inp;

        if (inp<0)
            neg++;
        if (inp%2!=0)
            od++;
    }

    cout << neg << " " << od;
}
