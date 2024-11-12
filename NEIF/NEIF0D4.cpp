#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct neif0d4 {
    ll d,m,y,k;
} inp,a,b;

ll days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    cin >> inp.d >> inp.m >> inp.y >> inp.k;

    // khoi tao
    a.d = inp.d;
    a.m = inp.m;
    a.y = inp.y;
    a.k = inp.k;
    b.d = inp.d;
    b.m = inp.m;
    b.y = inp.y;
    b.k = inp.k;
    // leap year
    if (inp.y%100!=0 && inp.y%4==0) {
        days[2]++;
    }
    else if (inp.y%400==0) {
        days[2]++;
    }
    // ngay hom sau
    a.k++;
    a.d++;
    if (a.k>8) {
        a.k = a.k % 7;
    }
    if (a.d>days[a.m]) {
        a.d = a.d-days[a.m];
        a.m++;
        if (a.m>12) {
            a.y++;
            a.m = a.m % 12;
        }
    }
    // ngay hom truoc
    b.k--;
    b.k = b.k + 7*(b.k==0 || b.k==1);
    b.d--;
    if (b.d<1) {
        b.m--;
        if (b.m<1) {
            b.y--;
            b.m += 12;
        }
        b.d += days[b.m];
    }

    cout << b.d << " " << b.m << " " << b.y << " " << b.k << "\n";
    cout << a.d << " " << a.m << " " << a.y << " " << a.k;
}
