#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c,d;

int main() {
    cin >> a >> b >> c >> d;

    if (((a==b) && (b==c) && (a!=d)) || ((a==c) && (c==d) && (a!=b)) || ((a==b) && (b==d) && (a!=c)) || ((b==c) && (c==d) && (b!=a))) {
        cout << 1;
    }
    else {
        cout << 0;
    }
}
