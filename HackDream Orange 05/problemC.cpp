#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll x;

int main() {
    npk;

    ll i,j,a,b;
    bool check;
    cin >> x;

    a = -1;
    b = -1;
    check = false;
    for(i = 1; i <= x; i++) {
        for(j = 0; j < i; j++) {
            if (x == (i*i - j*j)) {
                a = i;
                b = j;
                check = true;
                break;
            }
        }
        if (check) {
            break;
        }
    }

    if (check) {
        cout << a << " " << b;
    }
    else {
        cout << -1;
    }
}
