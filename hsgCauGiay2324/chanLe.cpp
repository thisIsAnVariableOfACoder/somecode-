#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("CAU4.INP","r",stdin);
    freopen("CAU4.OUT","w",stdout);
    
    ll i,tmp,le;
    cin >> m >> n;
    le = 0;
    for(i = 1; i <= m*n; i++) {
        cin >> tmp;

        le = le + (tmp%2);
    }

    cout << m*n - le << " " << le;
}
