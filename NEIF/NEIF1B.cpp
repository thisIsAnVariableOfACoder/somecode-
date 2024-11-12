#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c,d,e,f;

int main() {
    ll dt;
    cin >> a >> b >> c >> d >> e >> f;

    dt = -1;
    if ((a!=b) && (a!=c) && (b!=c) && ((sqrt(a*a+b*b)==c) || (sqrt(b*b+c*c)==a) || (sqrt(a*a+c*c)==b))) {
        if (a==d) {
            if (((b==e) && (c==f)) || ((b==f) && (c==e))) {
                dt=0;
            }
        }
        else if (a==e) {
            if (((b==d) && (c==f)) || ((b==f) && (c==d))) {
                dt=0;
            }
        }
        else if (a==f) {
            if (((b==e) && (c==d)) || ((b==d) && (c==e))) {
                dt=0;
            }
        }
        if (dt != -1) {
            if (a>max(b,c)) {
                dt=b*c;
            }
            else if (b>max(a,c)) {
                dt=a*c;
            }
            else if (c>max(a,b)) {
                dt=a*b;
            }
        }
    }

    if (dt != -1) {
        cout << dt;
    }
    else {
        cout << -1;
    }
}
