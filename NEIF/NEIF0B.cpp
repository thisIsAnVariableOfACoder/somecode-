#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c,d;

int main() {
    cin >> a >> b >> c >> d;

    if (((a==b) && (c==d) && (a!=c)) || ((a==c) && (b==d) && (a!=b)) || ((a==d) && (b==c) && (a!=b))) {
        cout << 1;
    }
    else {
        cout << 0;
    }
}
