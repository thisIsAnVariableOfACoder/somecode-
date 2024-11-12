#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k;
ll tong=0;
ll a[10005];

void back(ll indx) {
    ll i,j;

    for(i = 0 + ((k-tong)>(n-indx)); i <= 1 - (tong==k); i++) {
        a[indx] = i;
        tong += i;
        if (indx==n) {
            for(j = 1; j <= n; j++) {
                cout << a[j] << " ";
            }
            cout << "\n";
        }
        else 
            back(indx+1);
        tong -= i;
    }
}

int main() {
    cin >> n >> k;

    back(1);
}
