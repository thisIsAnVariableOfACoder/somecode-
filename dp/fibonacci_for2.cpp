#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
ll f[100005];

int main() {
    ll i,j;
    cin >> n;

    f[1]=1;
    for(i = 1; i <= n-1; i++) {
        for (j=1; j<=min(2ll, n - i); j++)
            f[i+j]= f[i+j] + f[i];
    }

    cout << f[n];
}
