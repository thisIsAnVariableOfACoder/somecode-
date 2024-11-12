#include <bits/stdc++.h>
using namespace std;

#define npk ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;

ll n;
ll a[1005][1005];

int main() {
    npk;

    ll i,k,l,cnt;
    cin >> n;

    cnt = 0;
    for(i = 1; i <= n; i++) {
        k = 1;
        l = i;
        while(k<=n && l>=1) {
            ++cnt;
            a[k][l] = cnt;
            ++k;
            --l;
        }
    }
    for(i = 2; i <= n; i++) {
        k = i;
        l = n;
        while(k<=n && l>=2) {
            ++cnt;
            a[k][l] = cnt;
            ++k;
            --l;
        }
    }

    for(i = 1; i <= n; i++) {
        for(k = 1; k <= n; k++) {
            cout << a[i][k] << " ";
        }
        cout << "\n";
    }
}





