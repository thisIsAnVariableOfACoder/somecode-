#include <bits/stdc++.h>
using namespace std;

bool prime(long long x) {
    if (x<=1) return false;
    else if (x==2) return true;
    else {
        long long e;
        for(e = 2; e <= (long long)(sqrt(x))+1; e++) {
            if (x%e==0) {
                return false;
                break;
            }
        }
    }
    return true;
}

long long snt(long long a, long long b) {
    long long i,countt;
    countt = 0;
    for(i = a; i <= b; i++) {
        if (prime(i)) countt = countt + 1;
    }

    return countt;
}

long long lcm(long long y, long long z) {
    return y*z/(__gcd(y,z));
}

long long nthDec(long long f, long long g, long long u) {
    long long i,thuong,du;
    du = f%g;
    for(i = 1; i <= u; i++) {
        du = du*10;
        thuong = du/g;
        du = du%g;
    }

    return thuong;
}

int main() {
    long long n,p,q;
    cin >> p >> q >> n;

    cout << __gcd(p,q) << endl;
    cout << snt(p,q) << endl;
    cout << lcm(lcm(p,q),n) << endl;
    cout << nthDec(p,q,n);
}
