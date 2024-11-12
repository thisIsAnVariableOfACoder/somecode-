#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;

int main() { // chua xong
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);

    ll k,m,lmax,vmax,i;
    cin >> n;

    m = 1;
    k = n-m*(m+1)/2;
    lmax =0;
    vmax=-1;
    while(k>=0) {
        if (k%n==0) {
            if (lmax<m) {
                lmax = m;
                vmax = k/m;
            }
        }
        m=m+1;
        k = n-m*(m+1)/2;
    }

    if (lmax<2)
        cout << 0;
    else {
        for(i = 1; i <= lmax; i++) {
            cout << vmax+i << " ";
        }
    }
}
