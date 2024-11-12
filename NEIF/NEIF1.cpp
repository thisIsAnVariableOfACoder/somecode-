#include <bits/stdc++.h>
using namespace std;

double a,b,c,d,e,f;

int main() {
    double dt,canh,cheo1,cheo2;
    cin >> a >> b >> c >> d >> e >> f;

    canh = -1;
    if ((a==b)) {
        if (((b==d) && (b==e) && (c==f)) || ((b==e) && (b==f) && (c==d)) || ((b==d) && (b==f) && (c==e))) {
            canh=b;
            cheo1=c;
        }
    }
    else if (a==c) {
        if (((a==d) && (a==e) && (b==f)) || ((a==e) && (a==f) && (b==d)) || ((a==d) && (a==f) && (b==e))) {
            canh=a;
            cheo1=b;
        }
    }
    else if (b==c) {
        if (((c==d) && (c==e) && (a==f)) || ((c==e) && (c==f) && (a==d)) || ((c==d) && (c==f) && (a==e))) {
            canh=c;
            cheo1=a;
        }
    }

    if (canh != -1) {
        cheo2 = 2*sqrt((canh*canh - (cheo1*cheo1)/4));
        dt = (0.5)*(cheo1*cheo2);

        cout << fixed << setprecision(2) << dt;
    }
    else {
        cout << -1;
    }
}
