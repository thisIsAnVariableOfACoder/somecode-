#include <bits/stdc++.h>

using namespace std;

double a, b, c, d, e, f;

int main() {
    double p;

    cin >> a >> b >> c >> d >> e >> f;
    if (((a==d) && (b==c && b==e && b==f)) ||
        ((a==e) && (b==c && b==d && b==f)) ||
        ((a==f) && (b==c && b==d && b==e)) ||
        ((b==d) && (a==c && a==e && a==f)) ||
        ((b==e) && (a==c && a==d && a==f)) ||
        ((b==f) && (a==c && a==d && a==e)) ||
        ((c==d) && (a==b && a==e && a==f)) ||
        ((c==e) && (a==b && a==d && a==f)) ||
        ((c==f) && (a==b && a==d && a==e))) {
        p= (a+b+c)/2;
        cout << fixed << setprecision(2) << 2*sqrt(p*(p-a)*(p-b)*(p-c));
    }
    else
        cout << -1;
}
