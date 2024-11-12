#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

void read() {
    freopen("012PTS.INP","r",stdin);
    freopen("012PTS.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

bool prime(ll x) {
    if (x<=1)
        return false;
    else if (x==2)
        return true;
    else {
        ll i;
        for(i = 2; i * i <= x; i++) {
            if (x%i==0)
                return false;
        }
    }
    return true;
}

int main() {
    fastIO();
    read();

    ll i;
    bool chekk;
    cin >> n;

    chekk = false;
    if (n%2==0) {
        cout << "2";

        n /= 2;
        chekk = true;
    }
    while(n%2==0) {
        cout << "*2";

        n /= 2;
    }
    for(i = 3; i * i <= n; i+=2) {
        if (prime(i)) {
            while(n%i==0) {
                if (chekk)
                    cout << "*" << i;
                else {
                    cout << i;
                    chekk = true;
                }

                n /= i;
            }
        }
    }
    if (n>2)
        cout << "*" << n;

}
