#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a,b,c,d;

int main() {
    ll ans = -1;
    cin >> a >> b >> c >> d;
    
    if ((a==c && b!=d) || (a==d && b!=c) || (b==c && a!=d) || (b==d && a!=c) || (a==c && b==d) || (a==d && b==c)) {
        ans=0;
    }
    if ((a==c && (b+d==a)) || (a==d && (b+c==a)) || (b==c && (a+d==b)) || (b==d && (a+c==d))) {
        ans=1;
    }

    cout << ans;
}
