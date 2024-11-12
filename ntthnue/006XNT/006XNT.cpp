#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

void read() {
    freopen("006XNT.INP","r",stdin);
    freopen("006XNT.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

bool isPrime() {
    if (n<=1)
        return false;
    else if (n==2)
        return true;
    else{
        ll i;
        for(i = 2; i * i <= n; i++) {
            if (n%i==0)
                return false;
        }
    }
    return true;
}

int main() {
    fastIO();
    read();

    cin >> n;

    if (isPrime())
        cout << "C";
    else
        cout << "K";
}
