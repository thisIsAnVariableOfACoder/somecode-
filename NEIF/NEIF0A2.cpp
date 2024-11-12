#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a;

int main() {
    double can2,can3;
    ll temp;
    cin >> a;

    temp=1;
    can2 = sqrt(a);
    can3 = cbrt(a);
    if (can2==ll(can2)) {
        temp*=2;
    }
    if (can3==ll(can3)) {
        temp*=3;
    }

    cout << temp-(temp==1);
}
