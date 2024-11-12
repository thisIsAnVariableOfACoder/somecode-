#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll phepNhanAnDo(ll x, ll y, ll modd) {
    ll temp;
    if (y==1) return x;
    temp = phepNhanAnDo(x,y/2,modd);
    if (y%2==1) return (temp + temp + x)%modd;
    else return (temp+temp)%modd;
}

ll a[5];

int main() {
    ll m,Nhan;
    cin >> a[1] >> a[2] >> a[3] >> m;

    sort(a+1,a+4);
    if (a[2]>=0) Nhan=phepNhanAnDo(a[2],a[3],m);
    else Nhan = phepNhanAnDo(abs(a[1]),abs(a[2]),m);

    cout << Nhan;
}
