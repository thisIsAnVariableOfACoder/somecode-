#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll d,m,y;
ll a[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    ll prevd,prevm,prevy,nexd,nexm,nexy;
    cin >> d >> m >> y;

    // nhuan
    if (y%100==0) {
        if (y%400==0) {
            a[2]++;
        }
    }
    else if (y%4==0) {
        a[2]++;
    }
    // prev
    prevd = d;
    prevm = m;
    prevy = y;
    prevd--;
    if (prevd<=0) {
        prevm--;
        if (prevm<=0) {
            prevm = 12;
            prevy--;
        }
        prevd = a[prevm];
    }
    // nex
    nexd = d;
    nexm = m;
    nexy = y;
    nexd++;
    if (nexd>a[nexm]) {
        nexm++;
        if (nexm>12) {
            nexm = 1;
            nexy++;
        }
        nexd = 1;
    }

    cout << prevd << " " << prevm << " " << prevy << "\n";
    cout << nexd << " " << nexm << " " << nexy;
}
