#include <bits/stdc++.h>

using namespace std;

long long a, b, c, d, e, f;

bool check(long long u, long long v, long long t, long long x, long long y, long long z) {
    if (u==x)
        if (v==y && t==z)
            if (u*u == v*v + t*t)
                return true;
    return false;
}
int main() {
    double p;

    cin >> a >> b >> c >> d >> e >> f;
    if (check(a, b, c, d, e, f) ||
        check(a, b, c, d, f, e) ||
        check(a, b, c, e, d, f) ||
        check(a, b, c, e, f, d) ||
        check(a, b, c, f, d, e) ||
        check(a, b, c, f, e, d) ||
        check(b, a, c, d, e, f) ||
        check(b, a, c, d, f, e) ||
        check(b, a, c, e, d, f) ||
        check(b, a, c, e, f, d) ||
        check(b, a, c, f, d, e) ||
        check(b, a, c, f, e, d) ||
        check(c, a, b, d, e, f) ||
        check(c, a, b, d, f, e) ||
        check(c, a, b, e, d, f) ||
        check(c, a, b, e, f, d) ||
        check(c, a, b, f, d, e) ||
        check(c, a, b, f, e, d)) {
        p= (a+b+c)/2.0;
        cout << (long long) 2*sqrt(p*(p-a)*(p-b)*(p-c));
    }
    else
        cout << -1;
}
