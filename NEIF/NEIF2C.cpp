#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,k,m;

int main() {
    ll temp,dau,cuoi;
    cin >> n >> k >> m;

    temp = (k-1)/m;
    if (temp%2!=0) {
        cuoi = (m + temp*m);
        dau = cuoi - (m-1);
        cuoi = min(cuoi,n);
        temp = dau+cuoi - k;
    }
    else {
        temp = k;
    }

    cout << temp;
}
