#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll tien(ll x) {
    ll s;
    s = 30*3000*(x>=30) + x*3000*(x>=1 && x<30);
    x = x - 30;
    s = s + 30*2500*(x>=30) + x*2500*(x>=1 && x<30);
    x = x - 30;
    s = s + 30*1800*(x>=30) + x*1800*(x>=1 && x<30);
    x = x - 30;
    s = s + x*1000*(x>0);

    return s;
}

int main() {
    int i;
    ll sum,maxx,a;
    vector<ll> v;
    maxx = LONG_MIN;
    sum = 0;
    for(i = 1; i <= 12; i++) {
        cin >> a;
        v.push_back(tien(a));

        maxx = max(maxx,tien(a));
        sum = sum + tien(a);
    }
    for(i = 0; i < v.size(); i++) {
        if (v[i]==maxx) cout << i+1 << " ";
    }
    cout << endl << sum;
}
