#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll f[100005];

int main() {
    ll i,j;
    cin >> n;

    for(i = 1; i <= n; i++) {
        f[i]=0;
    }
    f[1]=1;
    f[2]=1;
    for(i = 3; i <= n; i++) {
        for(j = 1; j <= 2; j++) {
            f[i] = f[i] + f[i-j];
        }
    }

    cout << f[n];
}
