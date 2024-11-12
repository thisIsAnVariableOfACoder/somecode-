#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll a[1005];

void read() {
    freopen("019SX.INP","r",stdin);
    freopen("019SX.OUT","w",stdout);
}

void fastIO() { ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

void printArr() {
    ll i;
    for(i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main() {
    fastIO();
    read();

    ll i;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> a[i];

    sort(a+1,a+n+1);
    printArr();
    sort(a+1,a+n+1,greater<ll>());
    printArr();
}
