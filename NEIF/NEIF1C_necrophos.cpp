#include <bits/stdc++.h>

using namespace std;

long long a, b, c, d;
long long check1;

bool check(long long u, long long v, long long x, long long y) {
    if (u==x) {
        if (v+y==u)
            check1= 1;
        return true;
    }
    return false;
}

int main() {
    cin >> a >> b >> c >> d;
    check1= 0;
    if (check(a, b, c, d) +
        check(a, b, d, c) +
        check(b, a, c, d) +
        check(b, a, d, c) > 0) {
        cout << check1;
    }
    else
        cout << -1;
}
